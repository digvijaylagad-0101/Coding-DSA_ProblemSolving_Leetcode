with peakHours as (

    select customer_id, count(customer_id) as cnt
    from restaurant_orders
    where time(order_timestamp) between '11:00:00' and '14:00:00'
        or time(order_timestamp) between '18:00:00' and '21:00:00'
    group by customer_id
)

select r.customer_id, count(*) as total_orders,
       round(((p.cnt)*100 / count(r.customer_id)),0) as peak_hour_percentage,
       round(avg(r.order_rating),2) as average_rating
from restaurant_orders r
inner join peakHours p
on r.customer_id = p.customer_id
group by r.customer_id
having count(*) >= 3
       and max(p.cnt)*100/count(r.customer_id) >= 60
       and avg(r.order_rating) >= 4.0
       and count(r.order_rating)*100/count(r.customer_id) >= 50
order by average_rating desc, customer_id desc;