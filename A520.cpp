#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	vector<bool> c(26);
	int n{}; cin>>n;
	string s;
	cin >> s;
	if(n<26) {
		cout << "NO";
		return 0;
	}

	forn(n) {
		if(s[i] >= 'A' && s[i] <= 'Z') {
			c[s[i]-'A'] = true;
		}
		else {
			c[s[i]-'a'] = true;
		}
	}

	forn(26) {
		if(!c[i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
