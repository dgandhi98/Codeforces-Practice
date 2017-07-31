#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
  int n;
  cin >> n;
  int numAlmost = 0;
  for(int i = 4; i <= n; i++) {
    unordered_set<int> myDivisors;
    int modified_i = i;
    int j = 2;
    while(modified_i!=1) {
      if(modified_i%j==0) {
        if(myDivisors.find(j)==myDivisors.end()) {
          myDivisors.insert(j);
        }
        modified_i /= j;
        j=2;
      }
      else if(j*j > modified_i) {
        if(myDivisors.find(modified_i)==myDivisors.end()) {
          myDivisors.insert(modified_i);
        }
        modified_i /= modified_i;
      }
      else {
        j++;
      }
    }
    if(myDivisors.size()==2) {
      numAlmost++;
    }
    myDivisors.erase(myDivisors.begin(), myDivisors.end());
  }
  cout << numAlmost;
  return 0;
}
