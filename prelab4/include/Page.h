#pragma once
#include <string>

using std::string;
using std::move;

class Page {
public:
    explicit Page(const string &_header = "empty", const string &_text = "empty") : _header(_header), _text(_text) {}

    virtual void SetHeader(const string &) = 0;

    virtual void Text(const string &) = 0;

    virtual string Text() = 0;

    virtual ~Page() = default;

protected:
    string _header;
    string _text;
};
