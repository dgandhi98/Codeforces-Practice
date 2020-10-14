#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n{}, k{};
	cin >> n;
	forn(n) {
		cin >> k;	
		cout << (k - (k/2+1)) << '\n';
	}
	return 0;
}
