-- Write your PostgreSQL query statement below
select user_id, concat(upper(name,1,1),lower(name,2,length(name)-1)) as name
from Users
order by user_id;