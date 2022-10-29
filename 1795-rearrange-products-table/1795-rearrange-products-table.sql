/* Write your T-SQL query statement below */


select product_id,store,price 
from products
unpivot
( 
    store for price in (store1,store2,store3)
) as pro
where price is not null;