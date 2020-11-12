#include <iostream>

int main() {
	std::string s;
	int k{};
	std::cin >> k;
	std::cin >> s;

	int count{0};
	for(int i = 0; i < k-1; i++) {
		if(s[i] == s[i+1]) {
			++count;
		}
	}
	std::cout << count;

}
