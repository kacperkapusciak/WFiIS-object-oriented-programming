//
// Created by kiper on 03.03.19.
//

#ifndef LAB1_PAGE_H
#define LAB1_PAGE_H

#include <string>

using std::string;

class Page {
public:

    Page(string _header = "empty", string _text = "empty");

    void Print() const;

    void AddHeader(string);

    void AddText(string);

    Page* Copy();

    string getHeader() const { return _header; };

    string getText() const { return _text; };

    void setHeader(string header) { _header = header; };

    void setText(string text) { _text = text; };

protected:
    string _header;
    string _text;
};


#endif //LAB1_PAGE_H
