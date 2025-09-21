# Write your MySQL query statement below
-- the outer select is used just to return null if dosen't exist
-- SELECT 
--     (SELECT DISTINCT salary
--      FROM Employee
--      ORDER BY salary DESC
--      LIMIT 1 OFFSET 1) 
-- AS SecondHighestSalary;

SELECT MAX(salary) AS SecondHighestSalary FROM Employee WHERE salary <(SELECT MAX(salary) FROM Employee);


-- A scalar subquery returning no rows → returns NULL in SQL.