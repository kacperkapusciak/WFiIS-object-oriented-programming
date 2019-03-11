#pragma once

#include <string>
using std::move;
using std::string;

/**
 * @class TitlePage
 */
class TitlePage
{
public:
  /**
   * @fn constructor
   * @brief default
  */
  TitlePage() = default;

  /**
   * @fn constructor
   * @param title [string]
  */
  explicit TitlePage(string title) : _title(move(title)) {}

  /**
   * @fn SetSubTitle
   * @brief sets sub_title value
   * @param sub_title [string]
   */
  void SetSubTitle(string sub_title) { _sub_title = move(sub_title); }

  /**
   * @fn SetAuthor
   * @brief sets author value
   * @param author [string]
   */
  void SetAuthor(string author) { _author = move(author); }

  /**
   * @fn GetTitle
   * @brief title getter
   * @return [string]
   */
  string GetTitle() { return _title; };

  /**
   * @fn GetSubTitle
   * @brief sub_title getter
   * @return [string]
   */
  string GetSubTitle() { return _sub_title; };

  /**
   * @fn GetAuthor
   * @brief author getter
   * @return [string]
   */
  string GetAuthor() { return _author; };

protected:
  string _title;     //!< variable that contains title
  string _sub_title; //!< variable that contains sub_title
  string _author;    //!< variable that contains author
};
