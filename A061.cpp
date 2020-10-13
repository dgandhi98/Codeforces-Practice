#include <iostream>
#include <string>

using namespace std;
int main() {
	string s1;
	string s2;
	cin >> s1 >> s2;
	for(int i = 0; i < s1.length(); i++) {
		int one = s1[i] - '0';
		int two = s2[i] - '0';
		cout << (one^two);
	}
	return 0;
}
