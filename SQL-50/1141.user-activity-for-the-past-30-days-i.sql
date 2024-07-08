-- Write your PostgreSQL query statement below
select activity_date as day, count(distinct user_id) as active_users
from Activity
where activity_date between '2019-06-28' and '2019-07-27' and activity_type is not null
group by activity_date;