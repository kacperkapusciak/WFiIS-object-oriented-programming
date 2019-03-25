//
// Created by kiper on 25.03.19.
//

#ifndef PRELAB5_PUBLICATION_H
#define PRELAB5_PUBLICATION_H

#include <string>

class Publication {
public:
    virtual ~Publication() = default;
    static Publication * Create(std::string, int, std::string);
    virtual std::string DOI() = 0;

protected:
    std::string _number = "/00.0000/000";
};


#endif //PRELAB5_PUBLICATION_H
