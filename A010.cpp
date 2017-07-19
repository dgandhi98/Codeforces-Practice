#include <iostream>
#include <stdio.h>

int main() {
  int n, p1, t1, p2, t2, p3;
  scanf("%d %d %d %d %d %d", &n, &p1, &p2, &p3, &t1, &t2);

  int currState = 1;
  int lastTime = 0;
  int powerConsumed = 0;

  int currTime1 = 0;
  int currTime2 = 0;

  scanf("%d %d", &currTime1, &currTime2);
  powerConsumed += p1*(currTime2-currTime1);
  lastTime = currTime2;
  for(int i = 1; i < n; i++) {
    scanf("%d %d", &currTime1, &currTime2);
    int sinceLast = currTime1 - lastTime;

    if(sinceLast > t1) {
      powerConsumed += p1*t1;
      sinceLast -= t1;
      if(sinceLast > t2) {
        powerConsumed += p2*t2;
        sinceLast -= t2;
        if(sinceLast > 0) {
          powerConsumed += p3*sinceLast;
          sinceLast -= sinceLast;
        }
      }
      else {
        powerConsumed += p2*sinceLast;
        sinceLast -= sinceLast;
      }
    }
    else {
      powerConsumed += p1*sinceLast;
      sinceLast -= sinceLast;
    }
    powerConsumed += p1*(currTime2-currTime1);
    lastTime = currTime2;

  }
  printf("%d", powerConsumed);

}
