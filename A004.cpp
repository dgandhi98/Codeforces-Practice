#include <iostream>

int main() {
	int x{};
	std::cin >> x;
	std::cout << ((x%2==0 && x/2 > 1) ? "YES" : "NO"); 
}
