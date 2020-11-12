#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n{}, m{};
	cin >> n >> m;
	long long sum{0};
	int curr{0};
	int tmp{};
	forn(m) {
		cin >> tmp;
		tmp--;
		long long dist = (tmp - curr);
		if(dist < 0) {
			dist += n;
		}
		sum += dist;
		curr = tmp;
	}
	cout << sum;
}
