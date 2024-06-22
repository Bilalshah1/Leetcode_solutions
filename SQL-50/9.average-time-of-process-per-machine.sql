-- Write your PostgreSQL query statement below

SELECT machine_id, ROUND(AVG(completion_time)::numeric, 3) as processing_time
FROM
(
SELECT a1.machine_id as machine_id, a1.process_id as process_id, 
       (a2.timestamp-a1.timestamp) as completion_time
FROM   Activity a1
JOIN   Activity a2 on a2.process_id=a1.process_id AND a1.activity_type='start' AND a2.activity_type='end' AND a1.machine_id=a2.machine_id
) AS subquery
GROUP BY machine_id;