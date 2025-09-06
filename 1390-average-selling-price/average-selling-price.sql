# Write your MySQL query statement below

SELECT p.product_id , ROUND(
        IFNULL(SUM(u.units * p.price) / SUM(u.units), 0),
        2
    ) as average_price
FROM Prices as p
LEFT JOIN
UnitsSold as u
on p.product_id =u.product_id
AND u.purchase_date BETWEEN p.start_date and p.end_date
GROUP BY P.product_id