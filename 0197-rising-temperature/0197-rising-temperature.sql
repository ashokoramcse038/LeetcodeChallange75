# Write your MySQL query statement below
select w1.id
from Weather as w1
join weather as w2
ON w1.recordDate=DATE_ADD(w2.recordDate,interval 1 day)
where w1.temperature>w2.temperature;