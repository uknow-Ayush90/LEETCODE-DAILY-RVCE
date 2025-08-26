# Write your MySQL query statement below

SELECT customer_id,COUNT(customer_id)as count_no_trans
FROM 
VISITS AS V
LEFT JOIN 
TRANSACTIONS AS T
ON V.visit_id = T.visit_id
WHERE T.transaction_id is NULL
GROUP BY customer_id