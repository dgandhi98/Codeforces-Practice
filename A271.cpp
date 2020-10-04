#include <iostream>

bool distinctDigits(int i) {
	int ones = i % 10;
	i /= 10;
	int tens = i % 10;
	i /= 10;
	int hunds = i % 10;
	i /= 10;
	int thous = i % 10;
	
	return !((ones == tens) || (ones == hunds) || (ones == thous) || 
	       (tens == hunds) || (tens == thous) || (hunds == thous));	
}
int main() {
	int n{};
	std::cin >> n;

	for(int i = n+1; i <= 9012; i++) {
		if(distinctDigits(i)) {
			std::cout << i;
			return 0;
		}
	}

	std::cout << -1;
	return 0;
}
