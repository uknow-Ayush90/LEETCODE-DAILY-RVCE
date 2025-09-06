# Write your MySQL query statement below
SELECT p.project_id, 
ROUND( SUM(e.experience_years)/ COUNT( DISTINCT p.employee_id),2 )AS average_years
FROM Project as p 
 join 
Employee as e
on p.employee_id = e.employee_id
GROUP BY project_id
