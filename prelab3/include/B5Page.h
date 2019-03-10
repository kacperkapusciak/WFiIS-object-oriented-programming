//
// Created by kiper on 03.03.19.
//

#ifndef LAB1_B5PAGE_H
#define LAB1_B5PAGE_H

#include "Page.h"

class B5Page : public Page
{
  public:
    explicit B5Page(string header = "empty", string text = "empty")
        : Page(move(header), move(text)) {}
};

#endif //LAB1_B5PAGE_H
