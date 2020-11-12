#include <iostream>

int main() {
	int E[1000001] = {0};
	E[1] = 1;
	E[2] = 1;
	E[3] = 1;
	E[4] = 1;
	E[5] = 1;

	int n{};
	std::cin >> n;
	if(n >= 1 && n <= 5) {
		std::cout << 1;
		return 0;
	}

	for(int i = 6; i <= n; ++i) {
		int min = E[i-5];
		for(int j = i-4; j < i; ++j) {
			if(E[j] < min) {
				min = E[j];
			}
		}
		E[i] = 1 + min;
//		std::cout << E[i] <<std::endl;
	}
	std::cout << E[n];
	return 0;
}
