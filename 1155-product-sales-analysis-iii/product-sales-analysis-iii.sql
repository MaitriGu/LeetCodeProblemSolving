# Write your MySQL query statement below
Select product_id,year as first_year,quantity,price
From Sales
Where (product_id,year) In (
    Select product_id,MIN(year) as year
    From Sales
    Group By product_id);