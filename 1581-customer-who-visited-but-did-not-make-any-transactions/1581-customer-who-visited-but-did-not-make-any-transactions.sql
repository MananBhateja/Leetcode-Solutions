/* Write your T-SQL query statement below */

-- select p.cid ,q.cnt from

-- (select distinct(customer_id) as cid from visits
-- where visit_id not in (select distinct(visit_id) from transactions) ) p
-- join 

-- (select customer_id,count(customer_id) as cnt from visits
-- group by customer_id  ) q

-- on p.cid = q.customer_id;

-- having visits.visit_id not in (select distinct(transactions.visit_id) from transactions) ; 

select customer_id,count(customer_id) as count_no_trans from visits
where visits.visit_id not in (select distinct(visit_id) from transactions)
group by customer_id;
