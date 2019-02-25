#pragma once
#include "Book.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Catalog
{
public:
  Catalog(string);
  ~Catalog();
  void AddBook(Book *);
  void Print();
private:
  string _name;
  vector<Book> _catalog;
};
