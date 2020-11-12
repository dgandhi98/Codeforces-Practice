#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n{};
	cin >> n;
	if(n==1) {
		cout << 1;
		return 0;
	}
	else if(n==2) {
		cout << 5;
		return 0;
	}
	//vector<int> num(n+1);
	//num[1] = 1;
	int num = 5;
	for(int i = 3; i <= n; ++i) {
		num += 2*i + 2*(i-2);
	}
	cout << num;
}
