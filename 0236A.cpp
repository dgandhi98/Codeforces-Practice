#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;
	int freq[26] = {};
	for(int i = 0;i < s.length(); i++ ) {
		++freq[(s[i]-'a')];
	}
	int count = 0;
	for(int i = 0; i < 26; i++) {
		if(freq[i] != 0) {
			++count;
		}
	}
	if(count % 2 == 0) {
		std::cout << "CHAT WITH HER!";
	}
	else {
		std::cout << "IGNORE HIM!";
	}
}
