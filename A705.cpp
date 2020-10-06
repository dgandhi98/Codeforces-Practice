#include <iostream>
#include <string>

using namespace std;

int main() {
	int n{};
	cin >> n;

	cout << "I hate ";
	n--;

	for(int i = 0; i < n; i++) {
		cout << "that ";
		if(i%2==0) {
			cout << "I love ";
		}
		else {
			cout << "I hate ";
		}
	}
	cout << "it";
}
