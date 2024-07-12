-- Write your PostgreSQL query statement below
select sell_date, count(distinct product) as num_sold, STRING_AGG(product ,',') AS products
from
(
select sell_date, product
from  Activities
group by product, sell_date
order by product ASC, 
sell_date ASC
) as subq
group by sell_date
order by sell_date ASC;
