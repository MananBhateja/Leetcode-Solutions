/* Write your T-SQL query statement below */

select employee_id, 

Case 
when employee_id %2 =1 and name not like 'm%' then salary
else 0

end
as bonus from employees
order by employee_id;

