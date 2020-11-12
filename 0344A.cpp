#include <iostream>
#include <string>

using namespace std;
int main() {
	int n{};
	cin >> n;
	string s1;
	string s2;
	
	cin >> s1;
	int count{1};
	for(int i = 1; i < n; i++) {
		cin >> s2;
		if(s2[0] == s1[1]) {
			++count;
		}
		s1 = s2;
	}

	cout << count;
}
