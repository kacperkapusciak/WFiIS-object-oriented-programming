#include "Page.h"
#include <iostream>
using std::cout;
using std::endl;

void Page::Print() const
{
  cout << "Page::header " << _header << endl;
  cout << "Page::text " << _text << endl << endl;
}
