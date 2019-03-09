//
// Created by kiper on 09.03.19.
//

#ifndef MOBILE_SILNIK_H
#define MOBILE_SILNIK_H

#include <string>
using std::string;
using std::move;

class Silnik final {
public:
    Silnik() = default;
    Silnik(int moc, float pojemnosc, string paliwo):
        _moc(moc), _pojemnosc(pojemnosc), _paliwo(move(paliwo)){}

protected:
    int _moc;
    float _pojemnosc;
    string _paliwo;
};


#endif //MOBILE_SILNIK_H
