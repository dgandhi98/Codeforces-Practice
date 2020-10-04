#include <iostream>
#include <string>
int main() {
	int n{};
	std::cin >> n;
	int x{0};
	std::string s;
	for(int i = 0; i < n; ++i) {
		std::cin >> s;
		int len = s.length();
		if(s[0] == '-' || s[len-1] == '-') {
			--x;
		}
		else if(s[0] == '+' || s[len-1] =='+') {
			++x;
		}
	}
	std::cout << x;
	return 0;
}
