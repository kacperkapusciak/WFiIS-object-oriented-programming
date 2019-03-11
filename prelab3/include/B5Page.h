#pragma once
#include "Page.h"

/**
 * @class B5Page
 */
class B5Page : public Page
{
public:
  /**
   * @fn    constructor
   * @param header [string] default value: "empty"
   * @param text   [string] default value: "empty"
   */
  explicit B5Page(string header = "empty", string text = "empty")
      : Page(move(header), move(text)) {}
};
