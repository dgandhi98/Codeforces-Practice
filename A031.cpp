#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
  int n;
  cin >>n;
  int forms[n+1];
  for(int i = 1; i <= n; i++) {
    cin >> forms[i];
  }

  for(int k = 1; k <= n; k++) {
    for(int j=k+1; j <= n;j++) {
      for(int i = 1; i <=n;i++) {
        if(i!=k && j!=k && forms[k]+forms[j]==forms[i]) {
          cout << i << " " << j << " " <<k;
          return 0;
        }
      }
    }
  }

  cout << -1;
  return 0;
}
