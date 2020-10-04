#include <iostream>
#include <string>

bool isVowel(char c) {
	return c=='y' || c == 'a' || c =='e' || c =='i' || c=='o' || c=='u';
}

bool isUpper(char c) {
	return c < 'a';
}

char toLower(char c) {
	return (c - 'A') + 'a';
}

int main() {
	std::string s{};
	std::cin >> s;
	for(int i = 0; i < s.length(); ++i) {
		char c = s[i];
		if (isUpper(c)) {
			c = toLower(c);
		}
		if (!isVowel(c)) {
			std::cout << "." << c;
		}
	}
	return 0;
}
