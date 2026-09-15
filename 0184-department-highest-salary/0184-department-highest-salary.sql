# Correlated Subquery : Inner-Query Continuously(for every record)  Dependant on the Outer Query
select d.name as Department, e.name as Employee, e.salary as Salary
from Employee as e
inner join Department as d
on e.departmentId = d.id
where e.salary = (select max(e2.salary)
                  from Employee as e2
                  where e.departmentId = e2.departmentId);
