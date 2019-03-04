#include "Page.h"
#include <iostream>
using std::move;
using std::cout;
using std::endl;

Page::Page(string _header, string _text) :
    _header(move(_header)), _text(move(_text)){}

void Page::Print() const {
    cout << "Page::header " << _header << endl;
    cout << "Page::text " << _text << endl;
}

void Page::AddHeader(string header) {
    _header = move(header);
}

void Page::AddText(string text) {
    _text = move(text);
}

Page* Page::Copy() {
    return new Page(_header, _text);
}