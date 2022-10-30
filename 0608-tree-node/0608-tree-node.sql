/* Write your T-SQL query statement below */

select id,(case 
          when   p_id is NULL then 'Root'
             when  id in (select distinct(p_id) from tree) and p_id is not NULL then 'Inner'
                                
           else 'Leaf'
           end
          ) as type 
          from tree;




-- select id,

-- select id from tree

--  where id in (select distinct(p_id) from tree) ;