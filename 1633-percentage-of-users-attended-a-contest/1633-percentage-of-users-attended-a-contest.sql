# Write your MySQL query statement below
select r.contest_id,Round(count(r.contest_id)*100/(select Count(*) from Users u),2) as percentage from Register r join Users u on u.user_id=r.user_id group by r.contest_id
order by percentage DESC,r.contest_id
