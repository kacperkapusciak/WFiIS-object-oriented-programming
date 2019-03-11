#include "Book.h"
#include <iostream>

using std::cout;
using std::endl;

Book::Book(string title, int numOfPages, string format) : TitlePage(move(title)), _numOfPages(numOfPages)
{
    for (int i = 0; i < _numOfPages; i++)
        _book.emplace_back(new B5Page());

    _titlePage = new TitlePage();
}

unsigned long Book::size()
{
    return _book.size();
}

Page *Book::operator[](int i)
{
    return _book[i - 1];
}

ostream &operator<<(ostream &out, Book &b)
{
    out << "[Book::Title]\t" << b.GetTitle() << " (" << b._titlePage->GetSubTitle() << ")" << endl;
    out << "[Book::Autor]\t" << b._titlePage->GetAuthor() << endl;

    for (int i = 0; i < (int)b._book.size(); i++)
    {
        if (b._book[i]->GetHeader() != "empty")
            out << "[Page(" << i << ")::header]\t" << b._book[i]->GetHeader() << endl;

        out << "[Page(" << i << ")::text]\t" << b._book[i]->GetText() << endl;
    }

    return out;
}
