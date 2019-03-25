#pragma once
#include "Samochod.h"
using std::cout;
using std::move;
//klasa Mercedes dziedziczaca po klasie Samochod
class Mercedes final: public Samochod
{
public:
    //konstruktory
    Mercedes() = default;
    Mercedes(string paliwo, int moc, int pojemnosc) : 
        _paliwo(move(paliwo)), _moc(moc), _pojemnosc(pojemnosc) 
    {
        _nazwa = "Mercedes A";
    }
    //metoda zwracajaca informacje o cisnieniu w kolach
    void WheelsPressureInfo();
    
    //funckja ktora zwraca referencje do vectora _kola
    vector<Wheel*>& Wheels() { return _kola; }

private:
    string _paliwo;
    int _moc;
    int _pojemnosc;
};
