1.
SELECT c.name, t.name
FROM courses as c 
           JOIN 
          teachers as t 
         ON c.teacher_id = t.id;




2.SELECT  t.name
  FROM  courses AS c
              JOIN 
             teachers AS t
            ON c.teacher_id = t.id
 GROUP BY t.id 
 HAVING count(*) = (  SELECT MAX(t1.cnt)
                                      FROM  (SELSECT COUNT(*) AS cnt
                                                   FROM courses AS c
                                                              JOIN 
                                                             teachers AS t
                                                            ON c.teacher_id = t.id
                                                            GROUP BY c.teacher_id) AS t1 ) )
3.
  SELECT  t.name
  FROM    teachers as t
  WHERE t.id NOT IN (SELECT teacher_id 
                                      FROM    courses);
