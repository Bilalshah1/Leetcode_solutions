-- Write your PostgreSQL query statement below
With subq as
(
    select query_name, coalesce(count(rating),0) as no_rating
    from Queries
    where rating<3 
    group by query_name

)
select q.query_name,
round(avg(cast(rating as float)/cast(position as float))::numeric, 2) as quality,
coalesce(round((cast((cast(no_rating as float)/count(*)) as float)*100)::numeric,2),0) as poor_query_percentage
from Queries q
left join subq on subq.query_name=q.query_name
where q.query_name is not null
group by q.query_name, no_rating