#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int checkStriped(string flag[],int n,int m) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m-1; j++) {
      if(flag[i][j]!=flag[i][j+1]) {
        return 0;
      }
    }
  }
  return 1;
}
// Only checks the first side
int checkAlternating(string flag[],int n,int m) {
  for(int j = 0; j < n-1; j++) {
    if(flag[j][0]==flag[j+1][0]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n, m;
  cin >> n >> m;
  string flag[n];
  for(int i = 0; i < n; i++) {
    cin >> flag[i];
  }
  // Checks each property separately because it was easier to program,
  // to increase efficiency, combine the two
  int striped = checkStriped(flag, n, m);
  int alternated = checkAlternating(flag, n, m);
  if(striped) {
    if(alternated) {
      cout << "YES";
    }
    else {
      cout << "NO";
    }
  }
  else {
    cout << "NO";
  }

  return 0;
}
