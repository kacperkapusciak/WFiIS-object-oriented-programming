#pragma once

#include <string>

using std::move;
using std::string;

class Page
{
public:
  /**
   * @fn constructor
   * @param header [string] default value: "empty"
   * @param text   [string] default value: "empty"
   */
  explicit Page(string header = "empty", string text = "empty") : _header(move(header)), _text(move(text)) {}

  /**
   * @fn destructor
   * @brief default
   */
  virtual ~Page() = default;

  /**
   * @fn SetHeader
   * @brief sets header value
   * @param header [string]
   */
  void SetHeader(string header) { _header = move(header); };

  /**
   * @fn GetHeader
   * @brief header getter
   * @return [string]
   */
  string GetHeader() { return _header; };

  /**
   * @fn GetText
   * @brief text getter
   * @return [string]
   */
  string GetText() { return _text; };

protected:
  string _header; //!< header
  string _text;   //!< text
};
