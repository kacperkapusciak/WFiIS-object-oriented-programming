//
// Created by kiper on 31.03.19.
//

#ifndef PRELAB6_B5PAGE_H
#define PRELAB6_B5PAGE_H


#include "Page.h"

class B5Page : public Page {
public:
    B5Page() : Page(){}
    B5Page(std::string header, std::string text) : Page(header, text) {}
};


#endif //PRELAB6_B5PAGE_H
