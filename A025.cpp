#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n{};
	cin >> n;

	vector<int> a(n);
	forn(n) {
		cin >> a[i];
	}

	bool isOddList = ((a[0] & 1) && (a[1] & 1)) || ((a[0] & 1) && (a[2] & 1)) || ((a[1] & 1) && (a[2] &1));
	forn(n) {
		if(a[i]%2 == !isOddList) {
			cout << (i+1);
		}
	}
	return 0;
}
