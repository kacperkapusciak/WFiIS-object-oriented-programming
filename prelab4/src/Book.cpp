#include "Book.h"
#include "A4Page.h"
#include "B5Page.h"

using std::endl;

Book::Book(const string &_title, int _number_of_pages, const string &_format) : _title(_title),
                                                                                _number_of_pages(_number_of_pages),
                                                                                _format(_format) {
    if (_format == "B5")
        for (int i = 0; i < _number_of_pages; i++)
            _book.emplace_back(new B5Page());
    else
        for (int i = 0; i < _number_of_pages; i++)
            _book.emplace_back(new A4Page());

    _titlePage = new TitlePage();
}

Book::~Book() {
    for (int i = 0; i < _number_of_pages; i++)
        delete _book[i];

    delete _titlePage;
}

TitlePage *Book::TitlePagePtr() {
    return _titlePage;
}

Page *Book::operator[](int i) {
    return _book[i];
}

const string &Book::Format() const {
    return _format;
}

int Book::size() const {
    return _number_of_pages + 1;
}

ostream &operator<<(ostream &out, const Book &b) {
    out << "[Book::Title]\t\t" << b._title << endl
        << "[Book::Autor]\t\t" << b._titlePage->get_author() << endl;

    for (int i = 0; i < (int) b._book.size(); i++)
        if (b._book[i]->Text() != "empty")
            out << "[Page(" << i << ")::text]\t\t" << b._book[i]->Text() << endl;

    return out;
}
