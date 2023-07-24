#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>

const int _BUFSIZE = 20;

int main() {
  const int numPoints = 10;
  const double minValue = -.00100;
  const double maxValue = .00100;
  const double stepSize = (maxValue - minValue) / (numPoints - 1);

  for (int i = 0; i < numPoints; ++i) {
    double x = minValue + i * stepSize;
    for (int j = 0; j < numPoints; ++j) {
      double y = minValue + j * stepSize;

      double radians = atan2(y, x);
      double angle = radians * 180.0 / M_PI;

      char buffer[_BUFSIZE], out[_BUFSIZE * 4];
      std::sprintf(buffer, "(%10.6f, %10.6f)", x, y);
      std::strcpy(out, buffer);
      std::sprintf(buffer, "\t\t rad = %9.6f", radians);
      std::strcat(out, buffer);
      std::sprintf(buffer, "\t\t angle = %9.3f", angle);
      std::strcat(out, buffer);
      std::cout << out << std::endl;
    }
  }

  _getch();
  return 0;
}