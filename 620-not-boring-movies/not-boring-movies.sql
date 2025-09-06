# Write your MySQL query statement below
SELECT id ,movie,description,rating
from Cinema
WHERE id%2!=0
AND NOT description ="BORING"
ORDER BY rating DESC
