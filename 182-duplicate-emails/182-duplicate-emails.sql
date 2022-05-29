# Write your MySQL query statement below
select distinct(e1.email) as email from Person e1,Person e2 where e1.email=e2.email and e1.id<e2.id;