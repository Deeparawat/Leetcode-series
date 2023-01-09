# Write your MySQL query statement be
select class
 from Courses 
 group by class
 having count(*) >=5