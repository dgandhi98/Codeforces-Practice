#include <iostream>
#include <stdio.h>
using namespace std;

int sumAtBase(int n, int b) {
  int sumOfDigits = 0;
  while(n > 0) {
    sumOfDigits+=n%b;
    n/=b;
  }
  return sumOfDigits;
}

int gcd(int n1, int n2) {
  if(n2%n1==0) {
    return n1;
  }
  else {
    return gcd(n2%n1,n1);
  }
}

int main () {
  int sum = 0;
  int n;
  cin >> n;
  for(int i = 2; i < n; i++) {
    sum += sumAtBase(n, i);
  }
  int denom = n-2;
  int numer = sum;
  int n_gcd = 0;
  n_gcd = gcd(numer, denom);
  denom /=n_gcd;
  numer /=n_gcd;
  cout << numer << "/"<< denom << endl;

}
