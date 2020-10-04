#include <iostream>

bool is_lucky(int n, int* nums) {
	for(int i = 0; i < 14; i++) {
		if(nums[i] == n) {
			return true;
		}
	}
	return false;

}

int main() {
	int nums[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	
	int n{};
	std::cin >> n;
	if(is_lucky(n, nums)) {
		std::cout << "YES";
		return 0;
	}
	for(int i = 0; i < 14 && nums[i] <= n; ++i) {
		if( (n % nums[i] == 0)) { 
			std::cout << "YES";
			return 0;
		}	
	}
	std::cout << "NO";
}
