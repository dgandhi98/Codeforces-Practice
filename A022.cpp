#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

  int n;
  cin >> n;
  int seq[n];

  for(int i = 0; i < n; i++) {
    cin >> seq[i];
  }

  sort(seq, seq + n);

  int res = 101;
  for(int i = 1; i < n && res==101; i++) {
    if(seq[i]!=seq[i-1]) {
      res = seq[i];
    }
  }

  if(res!=101) {
    cout << res;
  }
  else {
    cout << "NO";
  }
}
