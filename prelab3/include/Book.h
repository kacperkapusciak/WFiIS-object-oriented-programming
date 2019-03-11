#pragma once

#include "Page.h"
#include "B5Page.h"
#include "TitlePage.h"
#include <string>
#include <vector>
#include <iostream>

using std::ostream;
using std::string;
using std::vector;

/**
 * @class Book
*/
class Book : public Page, public TitlePage
{
public:
  /** 
    * @fn    constructor
    * @param title      [string]  title of the book
    * @param numOfPages [int]     number of pages in the book
    * @param format     [string]  format of the page 
    */
  Book(string, int, string);

  /**
   * @fn     size
   * @brief  returns size of the book
   * @return [unsigned long]
  */
  unsigned long size();

  /**
   * @fn     TitlePagePtr
   * @brief  returns pointer to title page
   * @return [TitlePage *]
  */
  TitlePage *TitlePagePtr() { return _titlePage; };

  /**
   * @fn      operator[]
   * @brief   overloaded [] operator
   * @param i [int]     index of the book page
   * @return  [Page *]
  */
  Page *operator[](int);

  /**
   * @fn operator<<
   * @brief overloaded << operator
   * @param out [ostream &] 
   * @param b   [Book &]
   * @return    [ostream &]
  */
  friend ostream &operator<<(ostream &, Book &);

private:
  vector<Page *> _book;  //!< vector of pointer to pages
  int _numOfPages;       //!< containts number of pages 
  TitlePage *_titlePage; //!< pointer to title page
};
