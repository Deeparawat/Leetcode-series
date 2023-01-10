# Write your MySQL query statement below


SELECT u.name , IFNULL(SUM(r.distance), 0) AS travelled_distance  
From Users u  LEFT JOIN RIDES r
ON u.id = r.user_id
GROUP BY u.id
ORDER BY travelled_distance DESC, u.name;


/* SELECT u.name,
SUM(CASE WHEN u.id = r.user_id THEN r.distance ELSE 0 END) AS travelled_distance
FROM Users u
LEFT JOIN Rides r
ON u.id = r.user_id
GROUP BY u.id
ORDER BY SUM(r.distance) DESC, name;
*/