#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int a{}, b{};
	cin >> a >> b;
	cout << min(a,b) << ' ' << (((a-min(a,b)) + (b-min(a,b))) / 2);
}
