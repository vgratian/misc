/*
Gets coordinates of 3 points and finds if the last point
is on the same line as the first two. Prints "true" or "false".
*/

#include <iostream>

int main() {

  float x1, x2, x3, y1, y2, y3;

  std::cout << "x1, x2, x3" << "\n";
  std::cin >> x1 >> x2 >> x3;

  std::cout << "y1, y2, y3" << "\n";
  std::cin >> y1 >> y2 >> y3;

  float slope;
  slope = (y2-y1)/(x2-x1);

  float intercept;
  intercept = y1 - (slope * x1);

  if(y3  == (slope * x3 + intercept))
    std::cout << "true\n";
  else
    std::cout << "false\n";

  return 0;
}
