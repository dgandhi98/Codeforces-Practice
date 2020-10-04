#include <iostream>

int main() {
	int n{};
	int k{};

	std::cin >> n;
	std::cin >> k;

	while(k>0) {
		if(n%10==0){
			n /= 10;
		}
		else {
			--n;
		}
		--k;
	}
	std::cout << n;
}
