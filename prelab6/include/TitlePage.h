//
// Created by kiper on 31.03.19.
//

#ifndef PRELAB6_TITLEPAGE_H
#define PRELAB6_TITLEPAGE_H

#include <string>
class TitlePage {
public:
    TitlePage() = default;
    void SetTitle(std::string title);
    std::string GetTitle();

private:
    std::string title;
};


#endif //PRELAB6_TITLEPAGE_H
