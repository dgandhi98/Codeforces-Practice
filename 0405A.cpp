#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n{};
	cin >> n;
	vector<int> cols(n);
	
	for(int i = 0 ; i < n; i++) {
		cin >> cols[i];
	}

	sort (cols.begin(), cols.end());
	/*
	for(int j = 1; j < n; j++) {
	for(int i = 1; i < n; i++) {
		if(cols[i-1] > cols[i]) {
			int tmp = cols[i-1] - cols[i];
			cols[i] += tmp;
			cols[i-1] -= tmp;
		}
	}
	}*/

	for(int i = 0; i < n; i++) {
		cout << cols[i] << " ";
	}
}
