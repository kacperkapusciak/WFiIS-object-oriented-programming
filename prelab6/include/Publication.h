//
// Created by kiper on 31.03.19.
//

#ifndef PRELAB6_PUBLICATION_H
#define PRELAB6_PUBLICATION_H


#include <string>

class Publication {
public:
    virtual ~Publication() = default;
    virtual unsigned NPages() = 0;
    static Publication * Create(std::string type, unsigned num_of_pages, std::string format);
};


#endif //PRELAB6_PUBLICATION_H
