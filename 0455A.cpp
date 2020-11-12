#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n{}, x{};
	cin >> n;
	long long count[100001] = {};
	forn(n) {
		cin >> x;
		count[x]++;
	}

	//int dp[100001] = {};
	long long dp0 = 0;
	long long dp1 = count[1];
	long long currdp{};
	for(int i = 2; i <= 100000; i++) {
		currdp = max(dp1, dp0 + count[i]*i);
		dp0 = dp1;
		dp1 = currdp;
	}
	cout << dp1;

}
