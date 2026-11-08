WITH peakHours AS (
    SELECT
        customer_id,
        COUNT(customer_id) AS cnt
    FROM restaurant_orders
    WHERE TIME(order_timestamp) BETWEEN '11:00:00' AND '14:00:00'
       OR TIME(order_timestamp) BETWEEN '18:00:00' AND '21:00:00'
    GROUP BY customer_id
)

SELECT
    r.customer_id,
    COUNT(r.customer_id) AS total_orders,

    ROUND(
        p.cnt * 100.0 / COUNT(r.customer_id),
        0
    ) AS peak_hour_percentage,

    ROUND(AVG(r.order_rating), 2) AS average_rating

FROM restaurant_orders r
INNER JOIN peakHours p
    ON r.customer_id = p.customer_id

GROUP BY r.customer_id

HAVING COUNT(r.customer_id) >= 3
   AND MAX(p.cnt) * 100.0 / COUNT(r.customer_id) >= 60
   AND AVG(r.order_rating) >= 4.0
   AND COUNT(r.order_rating) * 100.0 / COUNT(r.customer_id) >= 50

ORDER BY average_rating DESC, r.customer_id DESC;