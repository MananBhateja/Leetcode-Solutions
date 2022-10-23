/* Write your T-SQL query statement below */

select customers.name as Customers from customers 
LEFT JOIN orders
ON customers.id = orders.customerid 
where orders.customerid is NULL;

