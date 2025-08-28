SELECT today.id
FROM weather AS today
WHERE EXISTS (
    SELECT 1
    FROM weather AS yesterday
    WHERE today.temperature > yesterday.temperature
      AND DATEDIFF(today.recordDate, yesterday.recordDate) = 1
);
