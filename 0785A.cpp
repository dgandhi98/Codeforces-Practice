#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n{};
	cin >> n;
	string tmp;
	int count{0};
	forn(n) {
		cin >> tmp;
		if(!tmp.compare("Tetrahedron")) {
			count += 4;
		}
		else if(!tmp.compare("Cube")) {
			count += 6;
		}
		else if(!tmp.compare("Octahedron")) {
			count += 8;
		}
		else if(!tmp.compare("Dodecahedron")) {
			count += 12;
		}
		else if(!tmp.compare("Icosahedron")) {
			count += 20;
		}
	}
	cout << count;
}
