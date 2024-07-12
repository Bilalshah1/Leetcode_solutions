-- Write your PostgreSQL query statement below
select user_id, name, mail
from Users
where mail ~ '^[a-zA-Z]+([a-zA-Z.0-9_-]|)+@leetcode\.com$'
