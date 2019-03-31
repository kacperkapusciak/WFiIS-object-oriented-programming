//
// Created by kiper on 31.03.19.
//

#include "Publication.h"
#include "Book.h"

Publication* Publication::Create(std::string type, unsigned num_of_pages, std::string format) {
//    if (type == "Book") { //zakomentowane tylko aby wyeliminować warning
        return new Book(format, num_of_pages);
//    }
}
