#include <iostream>
#include <string>
#include <algorithm>
int main() {
	std::string s;
	std::cin >> s;

	int toLower{0};
	for(int i = 0 ; i < s.length(); i++) {
		if('a' <= s[i] && 'z' >= s[i] ){ 
			++toLower;
		}
	}
	if(s.length()-toLower <= toLower) {
		std::transform(s.begin(), s.end(), s.begin(), tolower);
	}
	else {
		std::transform(s.begin(), s.end(), s.begin(), toupper);
	}

	std::cout << s;
	return 0;

}
