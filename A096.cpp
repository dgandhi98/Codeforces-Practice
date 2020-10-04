#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >>s;
	int count = 0;
	char curr = '2';
	for(int i = 0; i < s.length(); ++i) {
		if(s[i] == curr) {
			++count;
			if(count == 7) {
				std::cout << "YES";
				return 0;
			}

		}
		else {
			count = 1;
			curr = s[i]; 
		}
	}

	std::cout << "NO";
}
