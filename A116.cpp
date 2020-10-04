#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int a, b;
	int minCap = 0;
	int cap = 0;
	for(int i = 0; i < n; i++ ) {
		std::cin >> a;
		std::cin >> b;
		cap -= a;
		cap += b;
		if(cap > minCap) {
			minCap = cap;
		}
	}
	std::cout << minCap;
}
