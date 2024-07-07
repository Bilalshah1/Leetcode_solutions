WITH subq AS (
    SELECT r.contest_id,
    ROUND((CAST(COUNT(r.user_id) AS NUMERIC) / CAST((SELECT COUNT(user_id) FROM Users) AS NUMERIC)) * 100, 2) AS percentage,
    FROM Register r 
    INNER JOIN Users u ON u.user_id = r.user_id
    GROUP BY r.contest_id
)
SELECT contest_id, percentage
FROM subq
ORDER BY
   percentage DESC,
   contest_id ASC;
