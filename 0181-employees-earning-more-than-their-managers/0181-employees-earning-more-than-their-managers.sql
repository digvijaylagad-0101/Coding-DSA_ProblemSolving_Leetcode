# Write your MySQL query statement below
select e2.name as Employee
from Employee e1
inner join Employee e2
on e1.id = e2.managerId    # e2.managerId --> employee detail && e1.id --> manager details
where e2.salary > e1.salary;

