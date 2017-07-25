#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int isPrime (int n) {
  if(n==1) {
    return 0;
  }
  else if(n==2) {
    return 1;
  }
  else if(n%2==0) {
    return 0;
  }
  else {
    for(int i = 3; i*i <= n;i+=2 ) {
      if(n%i==0) {
        return 0;
      }
    }
  }
  return 1;
}

int main() {
  int n, k;
  cin >> n >> k;
  int primes[n-1];
  int num_primes = 0;
  for(int i = 2; i <=n; i++) {
    if(isPrime(i)) {
      primes[num_primes] = i;
      num_primes++;
    }
  }
  /*for(int i = 0; i < num_primes; i++) {
    cout << primes[i] << " ";
  }*/

  int count=0;
  int notFinished = 1;
  for(int i = 0; i < num_primes && notFinished; i++) {
    for(int j = i; j > 1 && notFinished; j--) {
      if( (primes[i]-1)==(primes[j-1] + primes[j-2]) ) {
        count++;
      }
      if(count >= k) {
        notFinished = 0;
      }
    }
  }
  //cout << count;
  if(count >= k) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }


}
