-- Write your PostgreSQL query statement below
WITH subquery AS (
    SELECT student_id, student_name, Subjects.subject_name AS subj
    FROM Students
    CROSS JOIN Subjects
)
SELECT sq.student_id, sq.student_name, sq.subj as subject_name, COALESCE(COUNT(e.subject_name), 0) AS attended_exams
FROM subquery sq
LEFT JOIN Examinations e ON e.student_id = sq.student_id AND e.subject_name=sq.subj
GROUP BY sq.student_id, sq.student_name, sq.subj
ORDER BY sq.student_id;