#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
  int sides[4];
  
  //Insertion Sort (did just for practice)
  for(int k = 0; k < 4; k++) {
    scanf("%d",&sides[k]);
    for(int j = k; j > 0 && sides[j-1] > sides[j];j--) {
      int temp  = sides[j-1];
      sides[j-1] = sides[j];
      sides[j] = temp;
    }
  }

  //Hardcoded 4choose3 options
  string answ = "IMPOSSIBLE";
  if(sides[0] + sides[1] > sides[2]) {
    answ = "TRIANGLE";
    cout << answ << endl;
    return 0;
  }
  else if(sides[0] + sides[1]==sides[2]) {
    answ = "SEGMENT";
  }
  if(sides[0] + sides[1] > sides[3]) {
    answ = "TRIANGLE";
    cout << answ << endl;
    return 0;
  }
  else if(sides[0] + sides[1]==sides[3]) {
    answ = "SEGMENT";
  }
  if(sides[1] + sides[2] > sides[3]) {
    answ = "TRIANGLE";
    cout << answ << endl;
    return 0;
  }
  else if(sides[1] + sides[2]==sides[3]) {
    answ = "SEGMENT";
  }
  if(sides[0] + sides[2] > sides[3]) {
    answ = "TRIANGLE";
    cout << answ << endl;
    return 0;
  }
  else if(sides[0] + sides[2]==sides[3]) {
    answ = "SEGMENT";
  }

  cout << answ << endl;
  return 0;
}
