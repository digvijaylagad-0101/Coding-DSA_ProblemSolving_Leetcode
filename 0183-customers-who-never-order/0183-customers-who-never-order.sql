# Write your MySQL query statement below
select name as Customers
from Customers
where id not in (select customerId from Orders as o
                  inner join Customers as c
                  on c.id = o.customerId);