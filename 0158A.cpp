#include <iostream>

int main() {
	int n{}, k{};
	std::cin >> n;
	std::cin >> k;
	int count = 0;
	int c{-1};
	int i{0};
	for(i = 0; i < k; ++i) {
		std::cin >> c;
		if(c > 0) {
			++count;
		}
	//	std::cout << i << " " << c << " " << count <<"\n";
	}
	//std::cout <<"done\n";

	int c_k{};
	c_k = c;
	
	while(i < n) {
		std::cin >> c;
		if(c_k == c && c > 0) {
			++count;
		}
		else {
			break;
		}
	//	std::cout << i << " " << c << " " << count << "\n";
		++i;
	}

	std::cout << count;
}
