//
// Created by kiper on 31.03.19.
//

#ifndef PRELAB6_A4PAGE_H
#define PRELAB6_A4PAGE_H

#include "Page.h"

class A4Page : public Page {
public:
    A4Page() : Page(){}
    A4Page(std::string header, std::string text) : Page(header, text) {}
};


#endif //PRELAB6_A4PAGE_H
