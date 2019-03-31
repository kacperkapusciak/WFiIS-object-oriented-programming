//
// Created by kiper on 31.03.19.
//

#include "TitlePage.h"

void TitlePage::SetTitle(std::string title) {
    TitlePage::title = std::move(title);
}

std::string TitlePage::GetTitle() {
    return title;
}