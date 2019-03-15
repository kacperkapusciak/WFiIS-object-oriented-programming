//
// Created by kiper on 15.03.19.
//

#include "TitlePage.h"

TitlePage::TitlePage(const string &_author) : _author(_author) {}

void TitlePage::SetAuthor(const string &author) {
    _author = author;
}

const string &TitlePage::get_author() const {
    return _author;
}
