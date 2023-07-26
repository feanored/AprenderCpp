#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
  double pi = M_PI;

  printf("%15.5e", pi / 20);

  return !_getch();
}