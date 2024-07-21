-- Write your PostgreSQL query statement below
With t1 as
(
select TO_CHAR(trans_date, 'YYYY-MM') as month, country, coalesce(count(state),0) as approved_count, coalesce(sum(amount),0) as approved_total_amount
from 
Transactions
where state='approved'
group by country, month
)
,
t2 as
(
select TO_CHAR(trans_date, 'YYYY-MM') as month, country, coalesce(count(state),0) as trans_count, sum(amount) as trans_total_amount
from 
Transactions
group by country, month
)

select t2.month, t2.country, t2.trans_count, coalesce(t1.approved_count,0) as approved_count ,t2.trans_total_amount, coalesce(t1.approved_total_amount,0) as approved_total_amount
from t2
left join t1
on (t2.month=t1.month and t1.country=t2.country) or (t1.country is NULL and t2.country is NULL)


