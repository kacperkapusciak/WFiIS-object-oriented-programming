#include "Rzutnik.h"
#include <iostream>
using std::cout;
using std::endl;

Rzutnik::Rzutnik(const int _szerokosc, const int _wysokosc) : Wyswietlacz(_szerokosc, _wysokosc, "rzutnik", '_') {}

void Rzutnik::Wyswietl(Zrodlo *sygnal) const
{
  cout << "Polaczono " << _nazwa << " i " << sygnal->getNazwa() << endl;
  cout << string(_szerokosc, _ramka) << endl;
  for (int i = 0; i < _wysokosc; i++)
    cout << string(_szerokosc, sygnal->getSygnal()) << endl;

  cout << string(_szerokosc, _ramka) << endl;
  cout << endl
       << endl;
}