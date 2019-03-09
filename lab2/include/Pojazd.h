//
// Created by kiper on 09.03.19.
//

#ifndef MOBILE_POJAZD_H
#define MOBILE_POJAZD_H

#include <string>
#include <iostream>
using std::string;
using std::endl;
using std::ostream;
using std::move;

class Pojazd {
public:
    Pojazd(int kola, double przebieg, string kolor):
        _kola(kola), _przebieg(przebieg), _kolor(kolor){}
    Pojazd& operator=(const Pojazd &);
    friend ostream& operator<<(ostream&, const Pojazd&);
    void setPrzebieg(double przebieg) { _przebieg = przebieg; };

protected:
    int _kola;
    double _przebieg;
    string _kolor;
};

inline ostream& operator<< (ostream& out, const Pojazd &M ) {
    return out << endl << "Liczba kol " << M._kola << endl
               << "Stan licznika " << M._przebieg << " [km]" << endl
               << "Kolor " << M._kolor << endl;
}

#endif //MOBILE_POJAZD_H
