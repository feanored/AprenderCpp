#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>


int main() {
  const int _BUFSIZE = 100;

  const int numPoints = 25;
  const double minValue = -.00100;
  const double maxValue = .00100;
  const double stepSize = (maxValue - minValue) / (numPoints - 1);

  for (int i = 0; i < numPoints; ++i) {
    double x = minValue + i * stepSize;
    for (int j = 0; j < numPoints; ++j) {
      double y = minValue + j * stepSize;

      double radians = atan2(y, x);
      double angle = radians * 180.0 / M_PI;

      char* buffer = new char[_BUFSIZE];
      std::sprintf(buffer, "(%10.6f, %10.6f)", x, y);
      std::sprintf(buffer + strlen(buffer), "\t rad = %12.6e", radians);
      std::sprintf(buffer + strlen(buffer), "\t\t angle = %12.3e", angle);

      std::cout << buffer << std::endl;
      delete[] buffer;
      fflush(stdout);
    }
  }
  
  return !_getch();
}