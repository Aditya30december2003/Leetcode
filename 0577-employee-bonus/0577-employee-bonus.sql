# Write your MySQL query statement below
select a.name , b.bonus from employee as a left join bonus as b on a.empId = b.empId where b.bonus<1000 or b.bonus is null