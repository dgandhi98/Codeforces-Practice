#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
  string lestring;
  cin >> lestring;
  int len = lestring.length();
  int res = 0;

  for(int i = len-1; i > 0 && res==0; i--) {
    for(int h = 0; h < len-i && res==0; h++) {
      string subber = lestring.substr(h,i);
      string searcher = lestring.substr(h+1);
      //cout << subber <<" " << searcher << endl;
      int k = lestring.find(subber,h+1);
      if(k > -1) {
        res = subber.length();
      }
    }
  }
  cout << res;
}
