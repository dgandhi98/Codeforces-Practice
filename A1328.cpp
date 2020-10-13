#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int t{};
	cin >> t;

	int a{}, b{};
	forn(t) {
		cin >> a >> b;
		if (a%b==0) {
			cout << 0 << '\n';
		}
		else {
			cout << (b-(a%b)) << '\n';
		}
	}
}
