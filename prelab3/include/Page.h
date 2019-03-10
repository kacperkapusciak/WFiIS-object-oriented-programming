//
// Created by kiper on 03.03.19.
//

#ifndef LAB1_PAGE_H
#define LAB1_PAGE_H

#include <string>

using std::move;
using std::string;

class Page
{
  public:
    explicit Page(string header = "empty", string text = "empty") : _header(move(header)), _text(move(text)) {}

    virtual ~Page() = default;

    void SetHeader(string header)
    {
        _header = move(header);
    };

    string GetHeader() { return _header; };

    string GetText() { return _text; };

  protected:
    string _header;
    string _text;
};

#endif //LAB1_PAGE_H
