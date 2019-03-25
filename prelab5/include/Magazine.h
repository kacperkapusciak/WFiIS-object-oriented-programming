//
// Created by kiper on 25.03.19.
//

#ifndef PRELAB5_MAGAZINE_H
#define PRELAB5_MAGAZINE_H


#include "Publication.h"

class Magazine: public Publication {
public:
    std::string DOI() override {
        return "M" + _number;
    }
};


#endif //PRELAB5_MAGAZINE_H
