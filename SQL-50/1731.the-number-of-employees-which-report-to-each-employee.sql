-- Write your PostgreSQL query statement below
 select e.reports_to as employee_id, subq.name as name, count(reports_to) as reports_count, round(avg(age),0) as average_age
 from Employees e
 inner join 
 (
    select employee_id, name
    from Employees
 ) 
 as subq
 on subq.employee_id=e.reports_to
 group by e.reports_to, subq.name
 order by e.reports_to;