#pragma once
#include <string>
#include <iostream>
#include <vector>
using std::vector;
using std::endl;
using std::string;

//globalna zmienna bo potrzebuje ustawic kolor pojazdu zanim go stworze o_O
static string chwilowy_kolor;

//klasa okreslajaca cisnienie kola oraz metody z tym zwiazane
struct Wheel {
    //konstruktor
    Wheel(float cisnienie) : _cisnienie(cisnienie) {} 
    //destruktor
    ~Wheel() { delete this; }
    //getter cisnienia
    float Pressure() { return _cisnienie; };
    //setter cisnienia
    void UpdatePressure(float cisnienie) { _cisnienie = cisnienie; };
    //zmienna przechowujaca cisnienie w kole
    float _cisnienie;
};

//klasa bazowa po ktorej dziedziczy reszta klas
class Pojazd
{
public:
    //kostruktor
    Pojazd() {
    for (int i = 0; i < _liczba_kol; i++) 
        _kola.emplace_back(new Wheel(2.2f));
    }

    //destruktor
    ~Pojazd() {
        _kola.clear();
    }
    
    //settery
    void setLiczbaKola(int liczba_kol) { _liczba_kol = liczba_kol; };
    void setPrzebieg(int przebieg) { _przebieg = przebieg; };
    void setKolor(string kolor) { _kolor = kolor; };
    void setNazwa(string nazwa) { _nazwa = nazwa; };

    //przeladowanie operatora strumienia
    friend std::ostream& operator<< (std::ostream&, const Pojazd &);

protected:
    vector <Wheel*> _kola;
    int _liczba_kol = 4;
    int _przebieg = 0;
    string _kolor = "";
    string _nazwa = "";
};

inline std::ostream& operator<< (std::ostream& out, const Pojazd &M ) {
    return out << endl << "[INFO] " << M._nazwa << endl 
        << "[INFO] Stan licznika " << M._przebieg << " [km]" << endl
        << "[INFO] Kolor " << M._kolor << endl;
}