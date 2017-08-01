#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  int ans = 0;
  if(a==0) {
    if(b==0) {
      cout << 1; // all real solutions
    }
    else {
      cout << "No solution";
    }
  }
  else {
    double rat = ((double)b)/a;
    bool found = false;
    int cur;
    int i;
    for(i= -1000; i <= 1000 && !found ;i ++) {
      cur = pow(i, n);
      if(cur==rat) {
        found = true;
      }
    }
    i--;
    if(found) {
      cout << i;
    }
    else {
      cout << "No solution";
    }
  }
  return 0;
}
