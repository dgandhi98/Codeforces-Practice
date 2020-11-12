#include <iostream>

int main() {
	int n{};
	std::cin >> n;
	int groups[5] = {0};
	int tmp{};
	for(int i = 0; i < n; i++ ) {
		std::cin >> tmp;
		++groups[tmp];
	}

	int numTaxis{0};
	// 5 combinations
	// 4s
	numTaxis += groups[4];

	// 3,1
	numTaxis += groups[3];
	groups[1] -= groups[3];
	
	// 2,2
	numTaxis += (groups[2] / 2);
	groups[2] = groups[2] % 2;

	// 2, 1. At most one pairing of this.
	if(groups[2] > 0) {
		numTaxis += groups[2];
		groups[1] -= 2;
	}

	// 1,1
	if(groups[1] > 0) {
		numTaxis += groups[1] / 4;
		if(groups[1] % 4) {
			++numTaxis;
		}
	}

	std::cout << numTaxis;
}

