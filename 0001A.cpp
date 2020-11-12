#include <iostream>

int main() {
	long long m{}, n{}, a{};
	std::cin >> m; 
	std::cin >> n;
	std::cin >> a;
	
	long long width{n/a};
	long long length{m/a};

	if(m%a != 0)  
		length +=1;
	
	if(n%a != 0)
		width += 1;
	std::cout << (width * length);

}
