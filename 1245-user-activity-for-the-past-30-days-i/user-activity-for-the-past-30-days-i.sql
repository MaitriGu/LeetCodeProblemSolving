# Write your MySQL query statement below
Select activity_date as day, COUNT(DISTINCT(user_id)) AS active_users
From Activity
Where DATEDIFF('2019-07-27', activity_date) < 30 AND DATEDIFF('2019-07-27', activity_date)>=0
Group By activity_date;