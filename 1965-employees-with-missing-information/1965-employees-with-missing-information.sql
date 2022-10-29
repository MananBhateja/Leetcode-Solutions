
-- with temp as (
-- select employees.employee_id
-- from employees
-- join salaries
-- on employees.employee_id =salaries.employee_id )

select  employee_id from employees
where  employee_id not in (select employees.employee_id
from employees
join salaries
on employees.employee_id =salaries.employee_id)

union

select employee_id from salaries
where employee_id not in (select employees.employee_id
from employees
join salaries
on employees.employee_id =salaries.employee_id) ;
 
 
 
 

