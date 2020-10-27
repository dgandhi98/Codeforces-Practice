#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n{};
	int abc[3];
	cin >> n >> abc[0] >> abc[1] >> abc[2];

	int dp[4001] = {};
	dp[abc[0]] = 1;
	dp[abc[1]] = 1;
	dp[abc[2]] = 1;
	for(int i = 1; i <= n; i++) {	
		for(int j = 0; j < 3; j++) {
			if(i-abc[j] > 0 && dp[i-abc[j]]) {
				dp[i] = max(dp[i-abc[j]] + 1, dp[i]);
			}
		}
	}
	cout << dp[n];
}
