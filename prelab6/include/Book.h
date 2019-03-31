//
// Created by kiper on 31.03.19.
//

#ifndef PRELAB6_BOOK_H
#define PRELAB6_BOOK_H

#include "Publication.h"
#include "TitlePage.h"
#include "Page.h"
#include <iostream>
#include <string>
#include <vector>

class Book : public Publication {
public:
    Book(const std::string &format, unsigned int numOfPages);
    ~Book() override;
    unsigned NPages() override;
    TitlePage* TitlePagePtr();
    Book& operator++();
    Book& operator=(const Book&);
private:
    std::string format;
    unsigned num_of_pages;
    TitlePage* titlePagePtr;
    std::vector <Page *> book;
};


#endif //PRELAB6_BOOK_H
