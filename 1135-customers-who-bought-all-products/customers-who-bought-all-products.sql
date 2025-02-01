# Write your MySQL query statement below
Select customer_id 
From Customer
Group By customer_id
Having COUNT(DISTINCT product_key)=(Select COUNT(*)From Product);