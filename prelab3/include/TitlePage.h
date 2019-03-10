//
// Created by kiper on 10.03.19.
//

#ifndef BIBLOS2_TITLEPAGE_H
#define BIBLOS2_TITLEPAGE_H

#include <string>

using std::move;
using std::string;

class TitlePage
{
  public:
    TitlePage() = default;

    explicit TitlePage(string title) : _title(move(title)) {}

    void SetSubTitle(string sub_title) { _sub_title = move(sub_title); }

    void SetAuthor(string author) { _author = move(author); }

    string GetTitle() { return _title; };

    string GetSubTitle() { return _sub_title; };

    string GetAuthor() { return _author; };

  protected:
    string _title;
    string _sub_title;
    string _author;
};

#endif //BIBLOS2_TITLEPAGE_H
