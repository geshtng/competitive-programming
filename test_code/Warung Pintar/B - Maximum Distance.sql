SELECT u.name, SUM(r.distance) total_dist
FROM users AS u
INNER JOIN rides AS r ON u.id = r.user_id
GROUP BY u.id, u.name
ORDER BY total_dist DESC, u.name
LIMIT 100;