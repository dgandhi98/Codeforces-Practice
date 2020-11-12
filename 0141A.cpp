#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	vector<int> c(26);
	string s1, s2;
	cin >> s1 >> s2;
	string s3;
	cin >> s3;
	forn(s1.size()) {
		++c[s1[i]-'A'];
	}
	forn(s2.size()) {
		++c[s2[i]-'A'];
	}
	forn(s3.size()) {
		--c[s3[i]-'A'];
	}
	forn(26) {
		if(c[i]) {
		cout << "NO";
		return 0;
		}
	}
	cout << "YES";
}
