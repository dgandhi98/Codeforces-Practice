#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int printArray(double x[]) {
  for(int i = 0; i < 8;i++) {
    cout << x[i] << " ";
  }
  return 0;
}

int main() {

  double edges[8] = {3,1,5,7,6,2,9,8};
  for(int i = 0; i < 8; i++) {
    for(int j = i; j > 0 && (edges[j] < edges[j-1]);) {
      double temp = edges[j-1];
      edges[j-1] = edges[j];
      edges[j] = temp;
      j--;
    }
  }
  printArray(edges);
}
