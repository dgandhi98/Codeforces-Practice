#include <iostream>
#include <string>
int main() {
	std::string s;
	std::cin >> s;

	for(int i = 0; i < s.length() ; i++ ) {
		if(s[i]=='H') {
			std::cout << "YES";
			return 0;
		}
		if(s[i]=='Q') {
			std::cout << "YES";
			return 0;
		}
		if(s[i]=='9') {
			std::cout << "YES";
			return 0;
		}
	}

	std::cout << "NO";
}
