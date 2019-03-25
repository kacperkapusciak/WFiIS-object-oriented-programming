#pragma once
#include "Silnik.h"
#include "Pojazd.h"


//klasa Samochod dziedziczaca po klasie Silnik oraz po klasie Pojazd
class Samochod : public Pojazd
{
public:
    //konstruktory
    Samochod();

    //globalna metoda DefaultColor ustawiajaca kolor samochodu
    static void DefaultColor(string kolor);
protected:
    Silnik _typ_silnika;
};

