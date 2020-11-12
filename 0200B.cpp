#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n{};
	cin >> n;
	int sum_percs{0};
	int tmp{};
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		sum_percs += tmp;
	}

	cout << (((float) sum_percs) / n);
}
