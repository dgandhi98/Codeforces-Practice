#include <iostream>
#include <cstdio>

int main () {
	int n{};
	scanf("%i", &n);
	int count{0};
	for(int i = 0; i < n; ++i) {
		short a{}, b{}, c{};
		scanf(" %hi %hi %hi", &a, &b, &c);
		count += ( (a+b+c) > 1) ? 1:0;
	}
	std::cout << count;
}
