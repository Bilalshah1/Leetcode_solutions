-- Write your PostgreSQL query statement below
select employee_id
from Employees 
where manager_id NOT IN (select employee_id from Employees) AND salary<30000
ORDER BY employee_id
ASC;