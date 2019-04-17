#include <iostream>

using namespace std;

void compare(int a, int b)
{
  if (a > b) {
    printf("%d > %d\n", a, b);
  } else if (a < b) {
    printf("%d < %d\n", a, b);
  } else if (a == b) {
    printf("%d == %d\n", a, b);
  } else {
    printf("error");
  }
}

int main()
{

  compare(100, -100);

  return 0;
}
