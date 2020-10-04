#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;

	std::string mat = "hello";

	int i{0};
	int j{0};
	while( i < s.length() && j < mat.length()) {
		if(s[i] == mat[j]) {
			++j;
			++i;
		}
		else 
		{
			++i;
		}
	}
	if(j==mat.length()) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
