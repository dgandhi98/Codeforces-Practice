#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n{};
	cin >> n;
	vector<int> line(n);
	
	int max{0};
	int max_ind{-1};
	forn(n) {
		cin >> line[i];
		if(line[i] > max) {
			max = line[i];
			max_ind = i;
		}
	}
	
	int min{101};
	int min_ind{-1};
	forn(n) {
		if(line[i] <= min) {
			min = line[i];
			min_ind = i;
		}
	}

	int dist = ((n-1)-min_ind) + max_ind;
	if(min_ind < max_ind) {
		--dist;
	}

	cout << dist;

}
