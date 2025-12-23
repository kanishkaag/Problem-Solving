# Write your MySQL query statement below
-- select a.name from Employee a inner join employee b on a.id = b.managerId 
-- GROUP BY a.id, a.name
-- having COUNT(b.managerId) >= 5;

select name
from Employee
where id in (
    select managerId
    from Employee
    group by managerId
    having COUNT(*) >= 5
);
