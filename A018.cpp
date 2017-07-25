#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int dist(int x1,int y1,int x2,int y2) {
  return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int checkPythagorean (int x1,int y1, int x2, int y2, int x3, int y3) {
  //cout << x1 << y1 << x2 << y2 << x3 << y3 << endl;
  int sides[3] = {dist(x1,y1,x2,y2),dist(x2,y2,x3,y3), dist(x1,y1,x3,y3)};
  sort(sides, sides + 3);
  //cout << sides[0] << " "<< sides[1] <<" "<< sides[2] << endl;

  return sides[0] > 0 && sides[1] > 0 && sides[2] > 0 && (sides[0]+sides[1] == sides[2]);
}

int main() {
  int p[6];
  cin >> p[0] >> p[1] >> p[2] >> p[3] >> p[4] >> p[5];
  //cout << p[0] << p[1] << p[2] << p[3] << p[4] << p[5] << endl;
  //int x = dist(p[0], p[1], p[2], p[3]);
  //cout <<  x<< endl;
  if(checkPythagorean (p[0],p[1], p[2], p[3], p[4], p[5])) {
    cout << "RIGHT";
    return 0;
  }
  else {
    for(int i = 0; i < 6;i++) {
      for(int j = 1; j >=-1; j-=2) {
        p[i]+=j;
        if(checkPythagorean (p[0],p[1], p[2], p[3], p[4], p[5])) {
          cout << "ALMOST";
          return 0;
        }
        p[i]-=j;
      }
    }
  }
  cout << "NEITHER";return 0;
}
