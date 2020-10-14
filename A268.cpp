#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n{};
	cin >> n;
	map<int, int> colorNumsGuest;
	vector<int> colorNumsHome(n);
	
	int tmp{};
	forn(n) {
		cin >> colorNumsHome[i];
		cin >> tmp;
		if(colorNumsGuest.find(tmp) == colorNumsGuest.end()) {
			colorNumsGuest[tmp] = 1;
		}
		else {
			++colorNumsGuest[tmp];
		}
	}


	int cnt{};
	forn(n) {
		if(colorNumsGuest.find(colorNumsHome[i]) != colorNumsGuest.end()) {
			//cout << colorNumsHomie[i] << " " << colorNumsGuest[colorNumsHome[i]] << '\n';
			cnt += colorNumsGuest[colorNumsHome[i]];
		}
	}

	cout << cnt;
}
