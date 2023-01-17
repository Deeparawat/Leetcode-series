# Write your MySQL query statement below
/*select* from Patients where conditions like ' DIAB100%' or conditions like '%DIAB100 %' or conditions like '% DIAB100'  ;*/

select * from patients 
where conditions like '% DIAB1%' 
or conditions like 'DIAB1%';