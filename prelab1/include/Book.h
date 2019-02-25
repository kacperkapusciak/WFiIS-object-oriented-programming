#pragma once
#include "Page.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class Book
{
public:
  Book(string title = "dummy", string author = "anonym");
  ~Book();
  void AddPage(const Page *);
  void AddTitle(string);
  void AddHeader(string);
  void AddText(string);
  void Copy(Book *);
  string getTitle();
  void Print() const;

private:
  string _title;
  string _author;
  vector<Page> _book;
  unsigned _counter;
};

