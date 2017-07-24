#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  string drawing[n];
  int rowStart=-1;
  int rowEnd=-1;
  int colStart=-1;
  int colEnd=-1;
  for(int i = 0; i < n; i++) {
    cin >> drawing[i];
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(drawing[i][j]=='*') {
        if(rowStart==-1) {
          rowStart=i;
        }
        if(colStart > j || colStart==-1) {
          colStart=j;
        }
      }
    }
  }
  for(int i = n-1; i >= 0; i--) {
    for(int j = m-1; j >= 0; j--) {
      if(drawing[i][j]=='*') {
        if(rowEnd==-1) {
          rowEnd=i;
        }
        if(colEnd < j || colEnd==-1) {
          colEnd=j;
        }
      }
    }
  }

  for(int i = rowStart ; i <= rowEnd; i++) {
    for(int j =colStart ; j <= colEnd; j++) {
      cout << drawing[i][j];
    }
    cout << endl;
  }

}
