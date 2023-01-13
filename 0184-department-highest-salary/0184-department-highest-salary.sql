# Write your MySQL query statement below
/* SELECT D.name, E.name, E.salary from Employee E, Department D where D.id in  (select Max(salary ) ,id From Department  group by id ) */
 
 SELECT D.name as Department, E.name as Employee , E.salary as Salary from 
 Employee E INNER JOIN Department D ON E.departmentId=D.id
where (E.DepartmentId, Salary) in (
select DepartmentId, max(Salary) from Employee group by DepartmentId);
