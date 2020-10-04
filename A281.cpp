#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;
	//if(s[0] >= 'a' && s[0] <= 'z') {
	//	s[0] = s[0] - 'a' + 'A';
	//}
	s = std::towupper(s[0]);
	std::cout << s;
	return 0;
}
