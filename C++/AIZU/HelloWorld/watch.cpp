#include <iostream>
//#include <array>

using namespace std;

char watch(int seconds) {
  int minutes;
  int hours;

  hours = seconds / 3600;
  minutes = (seconds - hours * 3600) / 60;
  seconds = seconds % 60;

  printf("%d:%d:%d", hours, minutes, seconds);
}

int main() {
  watch(46979);
  return 0;
}
