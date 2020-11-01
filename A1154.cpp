#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>
#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int arr[4];
	int max_ind{-1};
	int max_num{INT_MIN};
	forn(4) {
		cin >> arr[i];
		if(arr[i] > max_num) {
			max_ind = i;
			max_num = arr[i];
		}
	}
	int a{}, b{}, c{};
	arr[max_ind] = arr[0];
       	arr[0] = max_num;	
	c = max_num - arr[1];
	a = arr[2] - max_num + arr[1];
	b = arr[3] - max_num + arr[1];
	cout << a << " " << b << " " << c;
}
