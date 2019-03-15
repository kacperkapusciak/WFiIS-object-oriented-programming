#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "TitlePage.h"
#include "Page.h"

using std::vector;
using std::string;
using std::ostream;

class Book {
public:
    Book(const string &_title, int _number_of_pages, const string &_format);
    ~Book();
    TitlePage *TitlePagePtr();

    Page *operator[](int i);

    const string &Format() const;

    int size() const;

    friend ostream &operator<<(ostream &out, const Book &b);

private:
    vector<Page *> _book;
    string _title;
    int _number_of_pages;
    string _format;
    TitlePage *_titlePage;
};
