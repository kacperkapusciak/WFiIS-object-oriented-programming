#pragma once
#include <string>
using std::string;

class Silnik
{
public:
    //konstruktory
    Silnik() = default;
    //konstruktor z uzyciem listy inicjalizacyjnej
    Silnik(int moc, double pojemnosc, string paliwo): 
        _moc(moc), _pojemnosc(pojemnosc), _paliwo(paliwo){ }
protected:
    int _moc;
    double _pojemnosc;
    string _paliwo;
};
