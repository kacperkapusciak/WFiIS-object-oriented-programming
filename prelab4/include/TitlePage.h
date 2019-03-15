#pragma once
#include <string>
using std::string;

class TitlePage {
public:
    explicit TitlePage(const string &_author = "Anonym");

    void SetAuthor(const string &_author);
    
    const string &get_author() const;
    
private:
    string _author;
};
