#pragma once
#include "Zrodlo.h"
#include <string>
using std::string;

class Wyswietlacz
{
public:
  Wyswietlacz(const int, const int, const string, const char);
  virtual void Wyswietl(Zrodlo *) const = 0;

protected:
  const int _szerokosc;
  const int _wysokosc;
  const string _nazwa;
  const char _ramka;
};
