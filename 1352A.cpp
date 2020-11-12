#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int k{};
	cin >> k;
	forn(k) {
		int n{};
		cin >> n;
		int cnt{0};

		int one = n % 10;
		n /= 10;
		if(one) {
			cnt++;
		}
		int two = n % 10;
		n /= 10;
		if(two) {
			cnt++;
		}
		int three = n % 10;
		n /= 10;
		if(three) {
			cnt++;
		}
		int four = n % 10;
		n /= 10;
		if(four) {
			cnt++;
		}
		if(cnt)
		cout << cnt << '\n';
		else if(n) {
			cout << 1 <<'\n';
			cout << 10000; 
		}

		if(one)
		cout << one << ' ';
		if(two)
		cout <<	two*10 <<' ';
		if(three)
		cout << three*100 << ' ';
		if(four) cout << four*1000;
		cout << '\n';
	}
}
