-- Write your PostgreSQL query statement below
select contest_id, percentage
from
(
        SELECT r.contest_id,
        ROUND((CAST(COUNT(r.user_id) AS NUMERIC) / CAST((SELECT COUNT(user_id) FROM Users) AS NUMERIC)) * 100, 2) AS percentage
        FROM Register r 
        INNER JOIN Users u ON u.user_id = r.user_id
        GROUP BY contest_id
) as sub
group by contest_id, percentage
ORDER BY 
    CASE 
        WHEN count(percentage)=1 THEN percentage ASC
        ELSE NULL
    END,
    CASE 
        WHEN count(percentage)>1 THEN contest_id  DESC
        ELSE NULL
    END;