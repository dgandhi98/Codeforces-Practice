#include <iostream>

int main() {
	int n{};
	std::cin >> n;

	int p{}, q{};
	int count{0};
	for(int i = 0; i < n; i++) {
		std::cin >> p;
		std::cin >> q;
		if(q-p >= 2)
		       ++count;	
	}
	std::cout << count;
}
