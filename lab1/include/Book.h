//
// Created by kiper on 03.03.19.
//

#ifndef LAB1_BOOK_H
#define LAB1_BOOK_H

#include "Page.h"
#include "B5Page.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Book : public Page {
public:
    explicit Book(string);
    void AddPage(B5Page *);
    void Print() const override;
    void SetHeader(string) override;
private:
    string _author;
    vector<B5Page> _book;
};


#endif //LAB1_BOOK_H
