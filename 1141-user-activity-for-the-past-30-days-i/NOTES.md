****
​
​
Step-by-step solution
​
SELECT the columns to display
SELECT activity_date AS day, COUNT(DISTINCT user_id) AS active_users
FROM Activity;
Define the condition of the dates by using the WHERE clause.
SELECT activity_date AS day, COUNT(DISTINCT user_id) AS active_users
FROM Activity
WHERE (activity_date > "2019-06-27" AND activity_date <= "2019-07-27");
Lastly, group the results by date
SELECT activity_date AS day, COUNT(DISTINCT user_id) AS active_users
FROM Activity
WHERE (activity_date > "2019-06-27" AND activity_date <= "2019-07-27")
GROUP BY activity_date;
​
​
2.
3. SELECT activity_date AS day, COUNT(DISTINCT user_id) AS active_users
FROM activity
GROUP BY activity_date
HAVING activity_date >= DATE_SUB('2019-07-27', INTERVAL 30 DAY)