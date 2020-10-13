#include <iostream>
using namespace std;

int main() {
	int k{},l{},m{},n{},d{};
	cin >> k >> l >> m >> n >> d;
	
	int count{};

	for(int i = 1; i <= d; i++) {
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0) {
			++count;
		}
	}
	cout << count;

	/*cout << k << l << m << n << d << endl;
	int c1 = d/k + d/l + d/m + d/n; 
	cout << c1 << endl;
	int c2 = d/(k*l) + d/(k*m) + d/(k*n) + d/(l*m) + d/(l*n) + d/(m*n);
	cout << c2 << endl;
	int c3 = d/(k*l*m) + d/(k*l*n) + d/(k*m*n) + d/(l*m*n);
	cout << c3 << endl;
	int c4 = d/(k*l*m*n);
	cout << c4 << endl;
	cout << c1 - c2 + c3 - c4;*/
}
