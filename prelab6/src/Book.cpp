//
// Created by kiper on 31.03.19.
//

#include "Book.h"
#include "B5Page.h"
#include "A4Page.h"

Book::Book(const std::string &format, unsigned int numOfPages) : format(format), num_of_pages(numOfPages) {
    if (format == "B5") {
        for (int i = 0; i < (int)numOfPages; i++) {
            book.emplace_back(new B5Page());
        }
    } else {
        for (int i = 0; i < (int)numOfPages; i++) {
            book.emplace_back(new A4Page());
        }
    }
    titlePagePtr = new TitlePage();
}

Book::~Book() {
    for (auto i: book) {
        delete i;
    }
    delete titlePagePtr;
}

unsigned Book::NPages() {
    return num_of_pages;
}

TitlePage *Book::TitlePagePtr() {
    return titlePagePtr;
}

Book &Book::operator++() {
    num_of_pages++;

    if (format == "B5")
        book.emplace_back(new B5Page());
    else
        book.emplace_back(new A4Page());

    return *this;
}

Book &Book::operator=(const Book &other) {
    if (&other != this) {
        if (other.format != format) {
            std::cout << "[ERROR]:: Trying to assign different formats!" << std::endl;
        } else {
            num_of_pages = other.num_of_pages;
        }
    }
    return *this;
}
