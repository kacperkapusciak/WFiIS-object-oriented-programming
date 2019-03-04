//
// Created by kiper on 04.03.19.
//

#include "Catalog.h"
#include <iostream>
using std::move;
using std::cout;
using std::endl;

Catalog::Catalog(string name): _name(move(name)) {}

Catalog::~Catalog() {
    for(Book *book: _catalog) {
        delete book;
    }
}

void Catalog::AddBook(Book * book) {
    _catalog.emplace_back(book);
}

void Catalog::Print() const {
    cout << "Catalog::name " << _name << endl;
    for (int i = 0; i < (int)_catalog.size(); i++){
        cout << "Catalog::book(" << i << ") " << _catalog[i]->getTitle() << endl;
    }
}