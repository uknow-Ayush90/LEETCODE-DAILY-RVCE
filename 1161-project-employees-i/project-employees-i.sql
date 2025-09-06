# Write your MySQL query statement below
SELECT 
    project_id,
    ROUND(SUM(exp_sum) / COUNT(emp_count), 2) AS average_years
FROM (
    SELECT 
        p.project_id,
        p.employee_id,
        e.experience_years AS exp_sum,
        p.employee_id AS emp_count
    FROM Project p
    JOIN Employee e 
        ON p.employee_id = e.employee_id
) AS t
GROUP BY project_id;
