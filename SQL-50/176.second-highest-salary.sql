-- Write your PostgreSQL query statement below
with subq as
(
select salary 
from Employee
group by salary
order by salary DESC
limit 1
offset 1
)
select case when (select count(distinct salary) from Employee)<2 then null
       else (select salary from subq)
       end as SecondHighestSalary

