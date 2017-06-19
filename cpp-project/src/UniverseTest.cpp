#include "Exercices/Universe.h"

#include <string>
#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

void msg(string channel, string msg) {

}

void success(bool success) {
  cout << "TECHIO> success " << (success ? "true" : "false");
}

int main() {
  vector<int> galaxy1 {2, 3};
  vector<int> galaxy2 {9, -3};
  assert(5 == Universe::CountAllStars(galaxy1));
  assert(6 == Universe::CountAllStars(galaxy2));
  success(true);

  return 0;
}

