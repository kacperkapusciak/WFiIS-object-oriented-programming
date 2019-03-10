//
// Created by kiper on 03.03.19.
//

#ifndef LAB1_BOOK_H
#define LAB1_BOOK_H

#include "Page.h"
#include "B5Page.h"
#include "TitlePage.h"
#include <string>
#include <vector>
#include <iostream>

using std::ostream;
using std::string;
using std::vector;

class Book : public Page, public TitlePage
{
  public:
    Book(string, int, string);

    unsigned long size();

    TitlePage *TitlePagePtr() { return _titlePage; };

    Page *operator[](int);

    friend ostream &operator<<(ostream &, Book &);

  private:
    vector<Page *> _book;
    int _numOfPages;
    TitlePage *_titlePage;
};

#endif //LAB1_BOOK_H
