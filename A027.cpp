#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool testCases[3001];
  for(int i = 0; i < 3001; i++) {
    testCases[i] = false;
  }
  int curr=0;
  for(int i = 0; i < n; i++) {
    cin >>curr;
    testCases[curr] = true;
  }
  int i=1;
  while(testCases[i] && i < 3001) {
    i++;
  }
  cout << min(i,3001);
}
