#include <iostream>
#include <string>

int main() {
	std::string Q;
	
	int n{};
	int t{};
	std::cin >> n;
	std::cin >> t;
	
	std::cin >> Q;

	std::string Q2(Q);
	
	while(t > 0) {
		for(int i = 0; i < n-1; ++i) {
			if(Q[i]=='B' && Q[i+1] =='G') {
				Q2[i] = 'G';
				Q2[i+1] = 'B';
				//std::cout << i;
				++i;
			}
			else {
				Q2[i] = Q[i];
			}
		}
		--t;
		Q = std::string(Q2);
	}
	std::cout << Q;

}
