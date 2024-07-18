-- Write your PostgreSQL query statement below
With subq as
(
select s.user_id, count(action) as cnt1
from Signups s
left join Confirmations c
on c.user_id=s.user_id 
group by s.user_id
)

select subq.user_id, 
CASE
        WHEN min(subq.cnt1) = 0 THEN 0
        ELSE round((cast(coalesce(count(action),0) as float)/cast((min(subq.cnt1)) as float))::numeric,2)
        END AS confirmation_rate
from Confirmations c
right join subq
on subq.user_id=c.user_id and  c.action='confirmed'
group by subq.user_id
