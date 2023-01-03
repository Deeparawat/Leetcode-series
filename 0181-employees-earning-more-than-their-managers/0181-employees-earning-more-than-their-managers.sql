/* Write your PL/SQL query statement below */
SELECT e1.name as  Employee
FROM EMPLOYEE e1 JOIN EMPLOYEE e2
ON (e1.MANAGERID = e2.ID);
WHERE e1.SALARY > e2.SALARY;