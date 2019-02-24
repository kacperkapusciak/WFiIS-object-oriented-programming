#pragma once
#include "Wyswietlacz.h"

class Rzutnik : public Wyswietlacz
{
public:
  Rzutnik(const int, const int);
  void Wyswietl(Zrodlo *) const;
};
