#include <iostream>
#include <vector>
int main() {
	/*
	 * input: ith number is p_i, p_i is number of friend who gave gift 
	 * to i.
	 *
	 * output: ith number should equal number of friend who gave gift 
	 * to number i
	 *
	 * */
	int n{};
	std::cin >> n;
	std::vector<int> arr(n);
	int tmp{};
	for(int i = 0; i < n; i++) {
		std::cin >> tmp;
		arr[tmp-1] = i+1;
	}
	for(int i =0; i < n; i++)
		std::cout << arr[i] << " ";

	return 0;
}
