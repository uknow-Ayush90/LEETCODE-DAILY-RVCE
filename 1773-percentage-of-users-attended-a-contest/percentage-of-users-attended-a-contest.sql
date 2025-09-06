# Write your MySQL query statement below
SELECT 
    r.contest_id,
    ROUND(COUNT(DISTINCT r.user_id) * 100 / (SELECT COUNT(*) FROM Users), 2) AS percentage
FROM Users as u

JOIN Register as r
on u.user_id = r.user_id
group by r.contest_id
ORDER BY percentage DESC ,r.contest_id ASC
