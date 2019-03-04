//
// Created by kiper on 04.03.19.
//

#ifndef PRELAB2_CATALOG_H
#define PRELAB2_CATALOG_H

#include "Book.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Catalog final {
public:
    explicit Catalog(string);
    ~Catalog();
    void AddBook(Book *);
    void Print() const;
private:
    string _name;
    vector<Book *> _catalog;
};


#endif //PRELAB2_CATALOG_H
