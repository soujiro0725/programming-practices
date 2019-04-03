#include <iostream>

using namespace std;

int cubic(int x) {
  return x * x;
}

int main()
{
  int result = cubic(5);
  printf("%d", result);
  return 0;
}

