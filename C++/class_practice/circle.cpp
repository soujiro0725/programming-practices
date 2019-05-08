#include "circle.h"

float Circle::get_area()
{
  return radius * radius * pi;
}

float Circle::get_circumference()
{
  return radius * 2 * pi;
}

