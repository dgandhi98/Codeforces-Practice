#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int kek;
  int numEven=0; int lastEven=0;
  int numOdd=0; int lastOdd=0;
  for(int i =1; i <= n; i++) {
    cin >> kek;
    if(kek%2==0) {
      numEven++;
      lastEven = i;
    }
    else {
      numOdd++;
      lastOdd = i;
    }
  }
  if(numOdd==1) {
    cout << lastOdd;
  }
  else if(numEven==1){
    cout << lastEven;
  }
  return 0;
}
