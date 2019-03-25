//
// Created by kiper on 25.03.19.
//

#include "Publication.h"
#include "Book.h"
#include "Magazine.h"
Publication* Publication::Create(std::string type, int n, std::string format) {
    if (type == "Book")
        return new Book();
    else
        return new Magazine();
}