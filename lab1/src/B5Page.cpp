//
// Created by kiper on 03.03.19.
//

#include "B5Page.h"
#include <iostream>
using std::cout;
using std::endl;


B5Page::B5Page() {
    _header = "empty";
    _text = "empty";
}

B5Page::B5Page(string header, string text) {
    _header = std::move(header);
    _text = std::move(text);
}

void B5Page::Print() const {
     cout << "[Page::header]\t" << _header << endl
        << "[Page::text]\t" << _text << endl;
}

void B5Page::SetHeader(string header) {
    _header = header;
}

B5Page* B5Page::Copy() const {
    return new B5Page(_header + " (Copy)", _text);
}

bool B5Page::operator==(B5Page *page) {
    return _text == page->_text && _header == page->_header;
}