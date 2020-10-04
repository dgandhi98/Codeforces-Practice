#include <iostream>

int main() {
	long k{};
	long n{};
	long w{};

	std::cin >> k;
	std::cin >> n;
	std::cin >> w;

	long ans = (((w*(w+1))*k) /2) - n; 

	std::cout << ((ans > 0) ? ans:0);
		
}
