with not_returned_copies as (

    select book_id, count(1) as total_not_returned_copies
    from borrowing_records
    where return_date is null
    group by book_id
)
select l.book_id, l.title, l.author, l.genre, l.publication_year, l.total_copies as current_borrowers
from library_books l
inner join not_returned_copies nrc
on l.book_id = nrc.book_id
where l.total_copies = nrc.total_not_returned_copies
order by current_borrowers desc, title asc;