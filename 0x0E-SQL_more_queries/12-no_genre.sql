-- Lists all shows in the database htbn_0d_tvshows without a genre inked.
-- Records are ordered by ascending tv_shows.title and tv_show_genre.genre.id.
SELECT s.`title`, g.`genre.id`
  FROM `tv_shows` AS s
	LEFT JOIN `tv_show_genres` AS g
	ON s.`id` = g.`show.id`
	WHERE g.`genre.id` IS NULL
  ORDER BY s.`title`, g.`genre.id`;
