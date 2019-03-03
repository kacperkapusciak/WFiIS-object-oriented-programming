//
// Created by kiper on 03.03.19.
//

#ifndef LAB1_PAGE_H
#define LAB1_PAGE_H

#include <string>

using std::string;

class Page {
public:
    virtual ~Page() = default;

    virtual void Print() const = 0;

    virtual void SetHeader(string) = 0;

    string getHeader() const { return _header; };

    string getText() const { return _text; };
protected:
    string _header;
    string _text;
};


#endif //LAB1_PAGE_H
