-- Write your PostgreSQL query statement below
select customer_id, count(customer_id) as count_no_trans
from
(
select v.visit_id, v.customer_id, t.transaction_id
from Visits v
left join Transactions t
on t.visit_id=v.visit_id
)as subquery
where transaction_id is NULL
group by customer_id
order by customer_id
ASC;