#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int n;
	std::cin >> n;
	std::vector<int> mycoins;

	int sum{0};
	int temp{};
	for(int i = 0; i < n; ++i) {
		std::cin >> temp;
		sum += temp;
		mycoins.push_back(temp);
	}
	std::sort(mycoins.rbegin(), mycoins.rend());

	int currSum{0};
	for(int i = 0; i < n; ++i) {
		currSum += mycoins[i];
		if(currSum > sum-currSum) {
			std::cout << i+1;
			return 0;
		}
	}
	std::cout << n;
	return 0;
}
