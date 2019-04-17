#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

vector<int> split(const string &s, char delim) {
  vector<int> elems;
  stringstream ss(s);
  string item;
  while (getline(ss, item, delim)) {
    if (!item.empty()) {
      elems.push_back(std::atoi(item.c_str()));
    }
  }
  return elems;
}

void show_sorted(string input) {
  vector<int> nums = split(input, ' ');

  std::sort(nums.begin(), nums.end());

  for (int i=0; i<nums.size();i++) {
    printf("%d", nums[i]);
  }
}

int main() {
  //vector<int> result;

  //result = split("1 2 3 4 5", ' ');

  /* for (int i=0; i<result.size(); i++) { */
  /*   printf("%d", result.at(i)); */
  /* } */

  show_sorted("1 6 3 9 5");
  
  return 0;
}

