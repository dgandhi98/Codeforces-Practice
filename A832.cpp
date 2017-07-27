#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
  long long n,k;
  cin >> n >> k;
  if((n/k)%2==1) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  return 0;
}
