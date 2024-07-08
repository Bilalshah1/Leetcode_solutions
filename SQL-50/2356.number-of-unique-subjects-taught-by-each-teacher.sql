-- Write your PostgreSQL query statement below
With subq as
(
    select DISTINCT subject_id, dept_id
    from Teacher
)
select t.teacher_id, count(distinct t.subject_id) as cnt
from Teacher t
inner join subq
on subq.subject_id=t.subject_id AND subq.dept_id=t.dept_id
group by t.teacher_id;