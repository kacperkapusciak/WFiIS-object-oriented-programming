//
// Created by kiper on 31.03.19.
//

#ifndef PRELAB6_PAGE_H
#define PRELAB6_PAGE_H


#include <string>

class Page {
public:
    Page(const std::string &header = "empty", const std::string &text = "empty") : header(header), text(text) {}
    virtual ~Page() = default;
protected:
    std::string header;
    std::string text;
};


#endif //PRELAB6_PAGE_H
