#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n{};
	cin >> n;
	vector<int> map(n);

	int tmp{};
	int p_n{};
	cin >> p_n;
	for(int i = 0; i < p_n; i++){
		cin >> tmp;
		++map[tmp-1];
	}

	int q_n{};
	cin >> q_n;
	for(int i = 0; i < q_n; i++){
		cin >> tmp;
		++map[tmp-1];
	}

	for(int i = 0; i < n; i++){
		if(!map[i]) {
		cout << "Oh, my keyboard!";
		return 0;
		}
	}

	cout << "I become the guy.";

}
