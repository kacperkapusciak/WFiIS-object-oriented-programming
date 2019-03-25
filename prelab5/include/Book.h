//
// Created by kiper on 25.03.19.
//

#ifndef PRELAB5_BOOK_H
#define PRELAB5_BOOK_H

#include <iostream>

#include "Publication.h"

class Book: public Publication {
public:
    std::string DOI() override {
        return "B" + _number;
    }
};


#endif //PRELAB5_BOOK_H
