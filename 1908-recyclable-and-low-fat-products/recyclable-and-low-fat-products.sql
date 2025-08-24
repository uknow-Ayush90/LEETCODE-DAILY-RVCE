# Write your MySQL query statement below
SELECT E1.product_id
FROM Products AS E1
JOIN Products AS E2
ON E1.product_id = E2.product_id
WHERE E1.low_fats = 'Y'
AND E2.recyclable = 'Y';
