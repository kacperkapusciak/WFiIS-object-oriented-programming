//
// Created by kiper on 03.03.19.
//

#ifndef LAB1_BOOK_H
#define LAB1_BOOK_H

#include "Page.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Book : public Page {
public:
    Book();
    ~Book();
    explicit Book(string);
    void Print() const;
    void Copy(Book*);
    void AddPage(Page *);
    void AddTitle(string);
    void AddHeader(string);
    void AddText(string);

    string getTitle() { return _title; };

private:
    string _author = "anonym";
    string _title = "dummy";
    vector<Page> _book;
    unsigned _counter = 1;
};


#endif //LAB1_BOOK_H
