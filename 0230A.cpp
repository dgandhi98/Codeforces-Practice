#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int s{}, n{};
	cin >> s >> n;
	vector<pair <int, int>> vals(n);

	forn(n) {
		cin >> vals[i].first >> vals[i].second;
	}

	sort(vals.begin(), vals.end());
	
	forn(n) {
		if(s <= vals[i].first) {
			cout << "NO";
			return 0;
		}
		s += vals[i].second;
	}
	cout << "YES";
}
