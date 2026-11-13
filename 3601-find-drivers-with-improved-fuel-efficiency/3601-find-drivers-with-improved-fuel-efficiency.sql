with first_half as (

    select driver_id, avg(distance_km / fuel_consumed) as avg1
    from trips
    where month(trip_date) between '01' and '06'
    group by driver_id
),
second_half as (

    select driver_id, avg(distance_km / fuel_consumed) as avg2
    from trips
    where month(trip_date) between '07' and '12'
    group by driver_id
),
combine as (

    select f.driver_id, f.avg1 as f_avg, s.avg2 as s_avg, (s.avg2 - f.avg1) as improvement
    from first_half f
    inner join second_half s
    on f.driver_id = s.driver_id
)

select d.driver_id, d.driver_name, round(c.f_avg,2) as first_half_avg, round(c.s_avg,2) as second_half_avg,
       round(c.improvement,2) as efficiency_improvement
from drivers d
inner join combine c
on d.driver_id = c.driver_id
where c.improvement > 0
order by efficiency_improvement desc, driver_name asc;