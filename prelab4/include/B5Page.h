#pragma once
#include "Page.h"

class B5Page : public Page {
public:
    B5Page() : Page() {}

    void SetHeader(const string &header) override {
        _header = header;
    }

    void Text(const string &text) override {
        _text = text;
    }

    string Text() override {
        return _text;
    }
};
