#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
	string s;
	regex e ("(WUB)+");
	cin >> s;
	string s1 = regex_replace (s, e, " ");
	string s2 = regex_replace (s1, regex("^\\s+"), "");
	s2 = regex_replace (s2, regex("\\s$"), "");
	cout << s2;
}
