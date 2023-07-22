#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
  const int numPoints = 10;
  const double minValue = -.00100;
  const double maxValue = .00100;
  const double stepSize = (maxValue - minValue) / (numPoints - 1);

  for (int i = 0; i < numPoints; ++i) {
    double x = minValue + i * stepSize;
    for (int j = 0; j < numPoints; ++j) {
      double y = minValue + j * stepSize;

      double angleRadians = atan2(y, x);
      double angleDegrees = angleRadians * 180.0 / M_PI;

      printf("(%10.6f, %10.6f)", x, y);
      printf("\t\t rad = %9.6f", angleRadians); 
      printf("\t\t angle = %9.3f", angleDegrees);
      std::cout << std::endl;
    }
  }

  _getch();
  return 0;
}