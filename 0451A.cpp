#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n{}, m{};
	cin >> n >> m;
	string s = (min(n, m) % 2)==0 ? "Malvika":"Akshat";
	cout << s;
}
