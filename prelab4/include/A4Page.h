#pragma once
#include "Page.h"

class A4Page : public Page {
public:
    A4Page() : Page() {}

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
