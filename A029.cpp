#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
  //bool posHasCamel[20000];
  int spitFromPos[20001];

  int n;
  cin >> n;
  int posOfCam;
  int distOfSpit;
  for(int i = 0; i < n; i++) {
    cin >> posOfCam >> distOfSpit;
    spitFromPos[posOfCam+10000] = distOfSpit;
  }

  bool spatOnEachOther = 0;
  for(int i = 1; i <= 20000 && !spatOnEachOther; i++) {
    if(spitFromPos[i]!=0) {
      int spitEndPosA = i + spitFromPos[i];
      if(spitEndPosA <= 20000 && spitEndPosA >= 1) {
        if(spitFromPos[spitEndPosA]!=0) {
          int spitEndPosB = spitEndPosA + spitFromPos[spitEndPosA];
          if(spitEndPosB <= 20000 && spitEndPosB >= 1) {
            if (spitEndPosB==i) {
              spatOnEachOther = true;
            }
          }
        }
      }
    }
  }

  if(spatOnEachOther) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }

}
