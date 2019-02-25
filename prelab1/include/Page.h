#pragma once
#include <string>
using std::string;

class Page
{
public:
  Page(const string header = "empty", const string text = "empty") : _header(header), _text(text) {}
  void AddHeader(const string header) { _header = header; }
  void AddText(const string text) { _text = text; }
  string getHeader() const { return _header; };
  string getText() const { return _text; };
  Page *Copy() const { return new Page(*this); }
  void Print() const;

private:
  string _header;
  string _text;
};
