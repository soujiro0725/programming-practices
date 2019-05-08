#include <iostream>
#include <string.h>
#include "circle.h"

using namespace std;


int main()
{
  Circle c;

  printf("area is %f\n", c.get_area());
  printf("circumference is %f\n", c.get_circumference());
  return 0;
}
