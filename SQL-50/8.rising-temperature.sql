-- Write your PostgreSQL query statement below
SELECT id
FROM
(SELECT
    id,
    temperature,
    recordDate,
    LAG(temperature) OVER (ORDER BY recordDate) AS prev_temp,
    LAG(recordDate) OVER(ORDER BY recordDate) as prev_date
FROM 
    Weather
) AS subquery
WHERE temperature>prev_temp AND (recordDate - prev_date) = 1;