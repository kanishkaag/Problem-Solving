# Write your MySQL query statement below
select name as Customers from Customers left join orders on Customers.id = Orders.customerID where Orders.customerId is NULL;
