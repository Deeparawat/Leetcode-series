/* Write your PL/SQL query statement below */


SELECT firstName as firstName , lastName as lastName , city , state
FROM Person
LEFT JOIN Address
ON Person.personId=Address.personId;