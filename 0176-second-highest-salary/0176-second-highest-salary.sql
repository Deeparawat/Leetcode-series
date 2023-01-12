# Write your MySQL query statement below
select Max(salary)   as SecondHighestSalary from Employee Where salary <> (select  Max(salary )  from Employee ) ;