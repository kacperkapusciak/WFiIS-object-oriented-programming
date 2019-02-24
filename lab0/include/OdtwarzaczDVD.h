#pragma once
#include "Zrodlo.h"

class OdtwarzaczDVD : public Zrodlo
{
public:
  OdtwarzaczDVD(const char);
  string getNazwa() { return _nazwa; };
  char getSygnal() { return _sygnal; };
};
