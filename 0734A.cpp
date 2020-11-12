#include <iostream>
#include <string.h>

int main() {
	int n{};
	std::string s;
	std::cin >> n;
	std::cin >> s;

	int A_count{0}, D_count{0};
	for(int i = 0; i < n; i++) {
		if(s[i]=='A') {
			++A_count;
		}
		else {
			++D_count;
		}
	}

	if(A_count > D_count) {
		std::cout << "Anton";
	}
	else if(D_count > A_count) {
		std::cout << "Danik";
	}
	else {
		std::cout << "Friendship";
	}
}
