#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int l_n{}, s_n{};
	cin >> l_n >> s_n;

	vector<int> l(l_n);
	
	forn(l_n) {
		cin >> l[i];
	}

	sort(l.begin(), l.end());
	double max_diff = max(l[0], s_n - l[l_n-1]);
	for(int i = 1; i < l_n; ++i) {
		max_diff = max(max_diff, ((double)(l[i] - l[i-1])) / 2.0);
	}
	cout << setprecision(10) << max_diff;
}
