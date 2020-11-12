#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
	int n{}, m{};
	cin >> n >> m;
	vector<int> arr(m);
	for(int i = 0; i < m; i ++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());
	int min_val{1000};
	for(int i = 0; (i+n-1) < m; i++ ) {
		min_val = min(min_val, -arr[i] + arr[i+n-1]);
	}
	cout << min_val;
}
