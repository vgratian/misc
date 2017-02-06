/*
Gets coordinates of 3 points and finds if the last point
is on the same line as the first two. Prints "true" or "false".
*/

#include <iostream>
#include "geocheck.h"

int main() 
{

  float x1, x2, x3, y1, y2, y3;

  std::cout << "x1, x2, x3" << "\n";
  std::cin >> x1 >> x2 >> x3;

  std::cout << "y1, y2, y3" << "\n";
  std::cin >> y1 >> y2 >> y3;

  bool b;
  b = isOnLine(x1, y1, x2, y2, x3, y3);

  if (b)
    std::cout << "true\n";
  else
    std::cout << "false\n";

  return 0;
}

