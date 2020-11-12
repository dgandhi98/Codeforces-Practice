#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

bool isPrime(int n) {
	if(n<=3) {
		return true;
	}
	else if(n%2==0) {
		return false;
	}
	for(int i = 3; i*i <= n; ++i) {
		if(n%i==0) return false;
	}
	return true;
}

int main() {
	int n{};
	cin >> n;
	int i{n/2};
	int j{n-i};
	while(i!=2) {
		//cout << i << ' ' << j << '\n';
		if(isPrime(i) || isPrime(j)) {
		i-=1;
		j+=1;
		}
		else {
		cout << i << " " << j << '\n';
		break;
		}
	}
}
