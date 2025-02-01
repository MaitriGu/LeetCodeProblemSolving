# Write your MySQL query statement below
Select max(num) as num
From (
    Select num
    From MyNumbers
    Group By num
    Having Count(num)=1
) as unique_numbers;