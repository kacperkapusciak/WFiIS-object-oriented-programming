#include "Book.h"
#include <iostream>
using std::cout;
using std::endl;

Book::Book(string title, string author) : _title(title), _author(author), _counter(1)
{
  if (title == "dummy")
    _book.emplace_back("empty", "Title page");
}

Book::~Book() {
  _book.clear();
}

void Book::AddPage(const Page *page)
{
  _book.emplace_back(*page);
}

void Book::AddTitle(string title)
{
  _title = title;
  _book[0].AddText("Title: " + title);
}

void Book::AddHeader(string header)
{
  int end = _book.size();
  for (int i = 1; i < end; i++)
  {
    _book[i].AddHeader(header);
  }
}

void Book::AddText(string text)
{
  if (_counter >= _book.size())
  {
    cout << "[ERROR]:: No enough pages in the book!" << endl
         << endl;
  }
  else
  {
    _book[_counter].AddText(text);
    ++_counter;
  }
}

void Book::Copy(Book *original)
{
  _author = "(copy) " + original->_author;
  int end = (int)original->_book.size();

  for (int i = 1; i < end; i++)
  {
    _book.push_back(original->_book[i]);
  }
}

string Book::getTitle() {
  return _title;
}

void Book::Print() const
{
  cout << "Book::autor " << _author << endl;
  for (int i = 0; i < (int)_book.size(); i++)
  {
    cout << "Page(" << i << ")::text " << _book[i].getText() << "(header: " << _book[i].getHeader() << ")" << endl;
  }
  cout << endl;
}
