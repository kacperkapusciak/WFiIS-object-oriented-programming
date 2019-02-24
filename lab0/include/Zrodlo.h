#pragma once
#include <string>
using std::string;

class Zrodlo
{
public:
  Zrodlo(const string, const char);
  string getNazwa() { return _nazwa; };
  char getSygnal() { return _sygnal; };

protected:
  const string _nazwa;
  const char _sygnal;
};
