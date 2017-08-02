#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
  long long n, d;
  cin >> n >> d;

  long long heights[n];
  for(int i = 0; i < n; i++) {
    cin >> heights[i];
  }
  int num=0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {

      int diff = heights[i]-heights[j];
      int absDiff = diff<0?(-1*diff):diff;
      if(i!=j && ( absDiff<=d)) {
        num++;
      }
    }
  }

  cout << num;
}
