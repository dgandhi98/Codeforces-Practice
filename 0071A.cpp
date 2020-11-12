#include <iostream>
#include <string>

int main () {
	int num{};
	std::cin >> num;
	for (int i = 0; i < num; ++i) {
		std::string s;
		std::cin >> s;
		int len = s.length();
		if (len > 10) {
			std::cout << s[0] << (len-2) << s[len-1] << "\n";
		}
		else {
			std::cout << s << "\n";
		}
	}
	return 0;
}

