#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
  int n,t;
  cin >> n >> t;
  int edge_n = 2*n;
  double edges[edge_n];
  double currX, currA;
  //since no overlaps, we can just calculate edges then sort

  for(int i = 0; i < n; i++) {
    cin >> currX >> currA;
    edges[2*i] = currX - currA/2;
    edges[2*i+1] = currX + currA/2;
  }

  for(int i = 0; i < edge_n; i++) {
    for(int j = i; j > 0 && (edges[j] < edges[j-1]);) {
      double temp = edges[j-1];
      edges[j-1] = edges[j];
      edges[j] = temp;
      j--;
    }
  }

  int count=2; //=0;
  for(int i = 1; i < edge_n; i+=2) {
    if(edges[i+1] - edges[i] > t) {
        count+=2;
    }
    else if(edges[i+1] - edges[i] == t) {
      count++;
    }
  }

  cout << count;
}
