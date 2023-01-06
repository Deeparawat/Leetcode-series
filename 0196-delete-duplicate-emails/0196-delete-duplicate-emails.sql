/*
 Please write a DELETE statement and DO NOT write a SELECT statement.
 Write your PL/SQL query statement below
 */
DELETE FROM Person
WHERE id IN (
    SELECT P1.id
    FROM Person P1 JOIN Person P2
    ON(P1.id > P2.id AND P1.email = P2.email)
);
