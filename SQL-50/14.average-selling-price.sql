select p.product_id, COALESCE(ROUND(CAST(SUM(p.price*uts.units) AS NUMERIC) / CAST(SUM(units) AS NUMERIC), 2), 0) AS average_price 
from Prices p
LEFT JOIN UnitsSold uts
ON uts.product_id=p.product_id AND uts.purchase_date>=p.start_date AND uts.purchase_date<=end_date
GROUP BY 
p.product_id;


