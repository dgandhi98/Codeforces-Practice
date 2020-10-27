#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

void printLine(int m) {
	forn(m) {
	cout << '#';
	}
	cout << '\n';
}
int main() {
	int n{}, m{};
	cin >> n >> m;
	printLine(m);
	n--;
	bool val = false;
	forn(n/2) {
		if(val) cout << '#';	
		for(int j=0; j < m-1; j++) {
			cout << '.';
		}
		if(!val) cout << '#';
		cout << '\n';
		printLine(m);
		val ^= 1;
	}
	return 0;
}
