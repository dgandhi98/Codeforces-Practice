#include <iostream>
#include <cmath>

int main() {


	int x{0};
	for(int i = 1; i <= 5; ++i) {
		for(int j = 1; j <= 5; ++j) {
			std::cin >> x;
			if(x) {
				std::cout << std::abs(i-3)+std::abs(j-3);
				return 0;
			}		
		}
	}	

}
