-- Write your PostgreSQL query statement below
With temp as
(
    select id, email,
    row_number() over (partition by email order by id) as row_num
    from Person
)
delete from 
Person where
id in (select id from temp where row_num>1)