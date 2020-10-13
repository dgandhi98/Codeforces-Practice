#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	string s;
	getline(cin, s);

	if(s[0] =='{' && s[1]=='}') {
		cout << 0;
		return 0;
	}

	unordered_set<char> set1;
	for(int i = 1; i < s.size(); i+=3) {
		set1.insert(s[i]);
	}
	cout << set1.size();

}
