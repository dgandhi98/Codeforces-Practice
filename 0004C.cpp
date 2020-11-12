#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, int> m;
	int n{};
	cin >> n;
	
	string tmp{};
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		if(m.find(tmp) != m.end()) {
			++m[tmp];
			cout << tmp << m[tmp] << "\n";
		}
		else {
			cout << "OK\n";
			m[tmp] = 0;
		}
	}

}
