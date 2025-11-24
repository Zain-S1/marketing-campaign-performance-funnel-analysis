# Write your MySQL query statement below
SELECT d1.id
FROM Weather d1
JOIN Weather d2
ON d1.recordDate = DATE_ADD(d2.recordDate, INTERVAL 1 DAY)
WHERE d1.temperature > d2.temperature;