#include <iostream>
using namespace std;
int main() {
	long long n{}, k{};
	cin >> n >> k;

	if(k <= n/2 + (n%2)) {
		cout << 2*k-1;
	}
	else {
		cout << 2 * (k-(n/2+(n%2)));
	}

}
