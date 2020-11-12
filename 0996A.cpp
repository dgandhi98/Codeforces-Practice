#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

void greedySoln(int n) {
	int count{0};
	count += n/100;
	n %= 100;

	count += n/20;
	n %= 20;
	
	count += n/10;
	n %= 10;
	
	count += n/5;
	n %= 5;
	
	count += n/1;
	n %= 1;
	cout << count;
}

/*Just for practice, doesn't work with limits
 * would have to implement where A[max(B)]*/
void dpSoln(int n) {
	int A[3000] = {};
	int B[] = {100, 20, 10, 5, 1};
	int m = sizeof(B)/sizeof(B[0]);
	forn(m) {
		A[B[i]] = 1;
	}
	for(int i = 1; i < n+1; i++) {
		if(A[i]) {
			continue;
		}
		int min_val = INT_MAX;
		for(int j = 0; j < m; j++) {
			if((i-B[j]) >= 1 && A[i-B[j]]) {
				min_val = min(A[i-B[j]], min_val);
			}
		}
		A[i] = min_val + 1;
	}
	cout << A[n];
}

int main() {
	int n{};
	cin >> n;
	greedySoln(n);
	//dpSoln(n);
}


