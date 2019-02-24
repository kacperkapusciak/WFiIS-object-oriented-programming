#pragma once
#include "Wyswietlacz.h"

class TelewizorLCD : public Wyswietlacz
{
public:
  TelewizorLCD(const int, const int);
  void Wyswietl(Zrodlo *) const;
};
