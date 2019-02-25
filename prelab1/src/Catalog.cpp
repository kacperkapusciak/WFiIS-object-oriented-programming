#include "Catalog.h"
#include <iostream>
using std::cout;
using std::endl;

Catalog::Catalog(string name) : _name(name) {}
Catalog::~Catalog() {
  _catalog.clear();
}
void Catalog::AddBook(Book * book) {
  _catalog.emplace_back(*book);
}

void Catalog::Print() {
  cout << "Catalog::name " << _name << endl; 

  for (int i = 0; i < (int)_catalog.size(); i++) {
    cout << "Catalog::book(" << i << ") " << _catalog[i].getTitle() << endl;
  }
}