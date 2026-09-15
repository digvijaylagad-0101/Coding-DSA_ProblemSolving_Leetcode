select d.name as Department, e.name as Employee, e.salary as Salary
from Employee as e
inner join Department as d
on e.departmentId = d.id
where e.salary = (select max(e2.salary)
                  from Employee e2
                  where e.departmentId = e2.departmentId);