//
// Created by kiper on 03.03.19.
//

#ifndef LAB1_B5PAGE_H
#define LAB1_B5PAGE_H

#include "Page.h"

class B5Page : public Page {
public:
    B5Page();
    B5Page(string, string);
    void Print() const override;
    void SetHeader(string) override;
    B5Page* Copy() const;
    bool operator==(B5Page*);
};


#endif //LAB1_B5PAGE_H
