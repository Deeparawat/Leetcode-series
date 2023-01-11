# Write your MySQL query statement below

SELECT author_id as id from Views
where author_id=viewer_id  
group by author_id,viewer_id  
ORDER BY id;