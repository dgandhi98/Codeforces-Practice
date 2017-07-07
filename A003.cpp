#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main() {
  string c1;
  string c2;
  cin >> c1 >> c2;

  int x1 = c1[0] - 'a';
  int y1 = c1[1] - '1';
  int x2 = c2[0] - 'a';
  int y2 = c2[1] - '1';

  int dx = x2-x1;
  int dy = y2-y1;

  int adx, dirx, ady, diry;
  if(dx!=0) {
    adx = abs(dx);
    dirx = dx/adx;
  }
  else {
    adx = 0;
    diry = 0;
  }
  if(dy!=0) {
    ady = abs(dy);
    diry = dy/ady;
  }
  else {
    ady = 0;
    diry = 0;
  }

  int steps = max(adx,ady);
  cout << steps << endl;

  while(ady>0 || adx>0) {
    if(adx > 0) {
      if(dirx ==-1) {
        cout << "L" ;
      }
      else if(dirx==1) {
        cout << "R";
      }
    }
    if(ady > 0) {
      if(diry == -1) {
        cout << "D";
      }
      else if(diry==1) {
        cout << "U";
      }
    }
    cout << endl;
    ady--;
    adx--;
  }

  return 0;
}
