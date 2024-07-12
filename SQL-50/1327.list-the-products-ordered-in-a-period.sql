-- Write your PostgreSQL query statement below
select p.product_name, sum(o.unit) as unit
from Products p
inner join Orders o 
on o.product_id=p.product_id
where order_date>='2020-02-01' and order_date<='2020-02-29'
group by p.product_name
having sum(o.unit)>=100 

