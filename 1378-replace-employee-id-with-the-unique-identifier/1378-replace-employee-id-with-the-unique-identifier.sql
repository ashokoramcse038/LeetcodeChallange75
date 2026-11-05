# Write your MySQL query statement below
select empUNI.unique_id,emp.name
from employees as emp
left join employeeUNI as empUNI
ON emp.id = empUNI.id
