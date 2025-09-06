SELECT today.id
FROM weather AS today
JOIN
weather AS yesterday
ON today.temperature > yesterday.temperature
AND DATEDIFF(today.recordDate, yesterday.recordDate) = 1

