#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <iostream>
#include <conio.h>
#include <string.h>
#include <cmath>


int main() {
  const int _BUFSIZE = 100;

  const int numPoints = 25;
  const double minValue = -.00100;
  const double maxValue = .00100;
  const double stepSize = (maxValue - minValue) / (numPoints - 1);

  double x = maxValue; // um valor pra x é o suficiente
  for (int j = 0; j < numPoints; ++j) {
    double y = minValue + j * stepSize;

    double radians = atan2(y, x);
    double angle = radians * 180.0 / M_PI;

    char* buffer = new char[_BUFSIZE];
    std::sprintf(buffer, "(%10.6f, %10.6f)", x, y);
    std::sprintf(buffer + strlen(buffer), "\t rad = %15.6e", radians);
    std::sprintf(buffer + strlen(buffer), "\t\t angle = %6.1f", angle);

    std::cout << buffer << std::endl;
    delete[] buffer;
  }
  
  return !_getch();
}