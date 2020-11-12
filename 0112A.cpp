#include <iostream>
#include <string>

int main() {
	std::string s;
	std::string t;
	std::cin >> s;
	std::cin >> t;

	if(s.length() > t.length()) {
		std::cout << 1;
		return 0;
	}
	else if(s.length() < t.length()) {
		std::cout << -1;
		return 0;
	}

	for(int i = 0; i < t.length() ; ++i) {
		char c_s = std::toupper(s[i]);
		char c_t = std::toupper(t[i]);
		if(c_s - c_t > 0) {
			std::cout << 1;
			return 0;
		}
		else if(c_s - c_t < 0) {
			std::cout << -1;
			return 0;
		}

	}
	
	std::cout << 0;
	
	return 0;
}

