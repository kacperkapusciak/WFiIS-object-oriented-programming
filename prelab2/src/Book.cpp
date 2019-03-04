//
// Created by kiper on 03.03.19.
//

#include "Book.h"
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

Book::Book(){
    _book.emplace_back(Page("empty", "Title page"));
}

Book::Book(string title) : _title(title) {
    _book.emplace_back(Page("empty", move(title)));
}

Book::~Book() {
    _book.clear();
}

void Book::AddPage(Page *page) {
    _book.emplace_back(*page);
}

void Book::Print() const {
    cout << endl << "Book::autor\t" << _author << endl;
    cout << "Page(0)::text\t" <<  _book[0].getText()
            << "(header: " << _book[0].getHeader() << ")" << endl;

    for (int i = 1; i < (int)_book.size(); i++) {
        cout << "Page("<< i << ")::text\t" << _book[i].getText()
            << "(header: " << _book[i].getHeader() << ")" << endl;
    }
    cout << endl;
}

void Book::Copy(Book * toCopy) {
    _book.clear();
    _author = "(copy) " + toCopy->_author;
    for (Page i : toCopy->_book){
        _book.emplace_back(i);
    }
}

void Book::AddTitle(string title) {
    _title = move(title);
    _book[0].setText(_title);
}

void Book::AddHeader(string header) {
    for (int i = 1; i < (int)_book.size(); i++) {
        _book[i].setHeader(header);
    }
}

void Book::AddText(string text) {
    if(_counter == _book.size()){
        cout << "[ERROR]:: No enough pages in the book!" << endl;
        return;
    }
    _book[_counter].setText(move(text));
    _counter++;
}