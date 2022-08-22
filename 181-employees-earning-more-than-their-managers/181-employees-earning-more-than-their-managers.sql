# Write your MySQL query statement below
SELECT E.name AS Employee
FROM Employee E, Employee M
WHERE E.managerId = M.id
AND E.salary > M.salary;

