#include "Samochod.h"

Samochod::Samochod() 
{
    _liczba_kol = 4;
    _kolor = chwilowy_kolor;
}

void Samochod::DefaultColor(string kolor) {
    chwilowy_kolor = kolor;
}
