#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int n, b1, b2, d;
  int moves = 0;
  scanf("%d %d", &n, &d);
  scanf("%d", &b1);

  for(int i = 0; i < n-1; i++) {
    scanf("%d", &b2);
    //cout <<i<<":"<< b1<<" "<<b2 <<endl;
    if(b1 >= b2) {
      moves += ((b1-b2)/d + 1);
      //cout << moves << endl;
      b2 += ((b1-b2)/d + 1)*d;
    }
    //cout <<i<<"*:"<< b1<<" "<<b2 <<endl;
    b1 = b2;
  }
  cout << moves;
}
