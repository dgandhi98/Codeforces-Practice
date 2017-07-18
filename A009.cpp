#include <iostream>
using namespace std;
int main() {
  int Y, W, numer, denomin;
  cin >> Y >> W;
  denomin = 6;
  numer = Y>W? Y-1:W-1;
  numer = 6-numer;
  if(numer%2==0){
    numer/=2;denomin/=2;
  }
  if(numer%3==0) {
    numer/=3;denomin/=3;
  }
  cout << numer << "/" << denomin;

}
