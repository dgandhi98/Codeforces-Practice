#include <iostream>

int main() {
	int n{}, h{};
	std::cin >> n;
	std::cin >> h;

	int width = n;
	int tmp{};
	for(int i = 0; i < n; i++) {
		std::cin >> tmp;
		if(tmp > h) {
			width++;
		}
	}
	std::cout << width;
}
