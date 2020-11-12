#include <iostream>
#include <math.h>

int main() {
	int a{};
	int b{};
	std::cin >> a;
	std::cin >> b;

	double lower = log(((double)b) / a) / log(3.0/2.0);
	int y = floor(lower + 1);
/*	while(b >= a) {
		b *= 2;
		a *= 3;
		++y;
	}
*/	//std::cout << a << " " << b << "\n";
	std::cout << y;
	
}
