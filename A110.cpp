#include <iostream>
#include <unordered_set>
int main() {
	std::unordered_set <int> luckyNumbers;
	luckyNumbers.insert(4);
	luckyNumbers.insert(7);
	luckyNumbers.insert(44);
	luckyNumbers.insert(47);
	luckyNumbers.insert(74);
	luckyNumbers.insert(77);
	long long int k{};

	std::cin >> k;

	int count{0};
	while( k > 0 ) {
		if(k%10 == 4 || k%10==7) {
			++count;
		}
		k/=10;
	}
	if( luckyNumbers.find(count) != luckyNumbers.end() ) {
		std::cout << "YES";
	}
	else {
	
		std::cout << "NO";
	}
}
