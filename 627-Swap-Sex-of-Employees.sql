# Write your MySQL query statement below
UPDATE Salary
set sex=CASE when sex='m' then 'f' when sex='f' then 'm' END;


