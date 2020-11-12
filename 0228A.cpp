#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	unordered_set<int> st;

	int duplicates{0};
	int tmp{};
	for(int i=0; i < 4; i++){
		cin >> tmp;
		if(st.find(tmp) != st.end()) {
			++duplicates;
		}
		else {
			st.insert(tmp);
		}
	}
	cout << duplicates;
	
}
