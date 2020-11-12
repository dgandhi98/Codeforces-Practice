#include <iostream>

int main() {
	int x_var{0};
	int y_var{0};
	int z_var{0};
	int num;
	std::cin >> num;

	int temp;
	for(int i = 0; i < num; ++i) {
		std::cin >> temp;
		x_var += temp;

		std::cin >> temp;
		y_var += temp;

		std::cin >> temp;
		z_var += temp;
	}
	if(!x_var && !y_var && !z_var) {
		std::cout << "YES" << "\n";
	}
	else {
		std::cout << "NO" << "\n";
	}
	return 0;
}
