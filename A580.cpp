#include <iostream>
#include <vector>

/**
 * Codeforces 580A
 * Kefa and first steps
 *
 * A[n] = length of max non-decreasing subsegment including elem[n]
 * A[i] = A[i-1] + 1 if elem[i] >= elem[i-1]
 *      = 1 otherwise
 * A[0] = 1
 * 
 * Only have to worry about last element, so you can remove entire array
 * and just use single variable.
 *
 * */

int main() {
	int n{};
	std::cin >> n;
	
	// only have to check the last element to see
	// if the segment continues
	int prev{};
	int tmp{};
	std::cin >> prev;

	// recurrence only depends on last element, so you 
	// can use just one variable rather than vector
	// std::vector dp(n);
	int dp = 1;
	int max = dp;
	for(int i = 1; i < n; i++) {
		std::cin >> tmp;
		if(tmp >= prev) { 
			// if seg continues
			// dp[i] = dp[i-1] + 1;
			dp += 1;
			if(dp > max) {
				max = dp;
			}
		}
		else {
			// otherwise restart segment
			dp = 1;
		}
		prev = tmp;
	}

	std::cout << max;
	return 0;
}
