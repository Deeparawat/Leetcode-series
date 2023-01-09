/* Write your PL/SQL query statement below */
select name from Customer where id not in (select id from customer where referee_id=2);