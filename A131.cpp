#include <iostream>
#include <string.h>

int main() {
	
	std::string s;
	std::cin >> s;

	bool toChange = true;
	for(int i = 1; i < s.length(); i++) {
		if(s[i] <= 'z' && s[i] >= 'a') {
			toChange = false;
		}
	}

	if(toChange) {
		if(s[0] <= 'z' && s[0] >= 'a')
			std::cout << (char) (s[0]-'a'+'A');
		else
			std::cout << (char) (s[0]-'A'+'a');
		for(int i = 1; i < s.length(); i++)
			std::cout << (char)(s[i]-'A'+'a');
	}
	else {
		std::cout << s;
	}
	return 0;
}
