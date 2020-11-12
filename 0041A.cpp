#include <iostream>
#include <string.h>

int main() {
	std::string s;
	std::string t;
	std::cin >> s;
	std::cin >> t;

	if (s.length() != t.length()) {
		std::cout << "NO";
		return 0;
	}
	
	for(int i = 0; i < s.length(); i++) {
		if(s[i] != t[t.length()-i-1]) {
			std::cout << "NO";
			return 0;
		}
	}

	std::cout << "YES";
	return 0;
	


}
