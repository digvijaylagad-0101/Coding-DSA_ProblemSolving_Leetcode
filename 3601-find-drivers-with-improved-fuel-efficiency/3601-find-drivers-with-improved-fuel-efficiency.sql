WITH first_half AS (
    SELECT
        driver_id,
        AVG(distance_km / fuel_consumed) AS avg1
    FROM trips
    WHERE MONTH(trip_date) BETWEEN 1 AND 6
    GROUP BY driver_id
),

second_half AS (
    SELECT
        driver_id,
        AVG(distance_km / fuel_consumed) AS avg2
    FROM trips
    WHERE MONTH(trip_date) BETWEEN 7 AND 12
    GROUP BY driver_id
),

combine AS (
    SELECT
        f.driver_id,
        f.avg1 AS f_avg,
        s.avg2 AS s_avg,
        (s.avg2 - f.avg1) AS improvement
    FROM first_half f
    INNER JOIN second_half s
        ON f.driver_id = s.driver_id
)

SELECT
    d.driver_id,
    d.driver_name,
    ROUND(c.f_avg, 2) AS first_half_avg,
    ROUND(c.s_avg, 2) AS second_half_avg,
    ROUND(c.improvement, 2) AS efficiency_improvement
FROM drivers d
INNER JOIN combine c
    ON d.driver_id = c.driver_id
where c.improvement > 0
ORDER BY efficiency_improvement DESC, driver_name ASC;