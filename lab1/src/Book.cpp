//
// Created by kiper on 03.03.19.
//

#include "Book.h"
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

Book::Book(string title){
    _author = "Anonym";
    _book.emplace_back(B5Page("empty", "Title: " + title));
}

void Book::AddPage(B5Page *page) {
    for(B5Page shallow : _book) {
        if(shallow == page){
            cout << "[WARNING]:: Trying to add already existing page!" << endl;
            return;
        }
    }
    _book.emplace_back(*page);
}

void Book::Print() const {
    cout << endl << "[Book::autor]\t" << _author << endl;
    cout << "[Page(0)::text]\t" <<  _book[0].getText() << endl;

    for (int i = 1; i < (int)_book.size(); i++) {
        cout << "[Page("<< i << ")::header\t" << _book[i].getHeader() << endl;
        cout << "[Page("<< i << ")::text\t" << _book[i].getText() << endl;
    }
}

void Book::SetHeader(string header) {
    for (int i = 0; i< (int)_book.size(); i++) {
        _book[i].SetHeader(header);
    }
}