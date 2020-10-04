#include <iostream>
#include <string>



void merge(int[] lst1, int[] lst2) {

}

void merge_sort(int[] lst, int begin, int end) {
	if( (begin - end) == 0 ) {
		return arr;
	}
	if((end - begin) == 1) {
		return arr;
	}

	int mid = begin - (begin - end) / 2;

	merge_sort(lst, begin, mid);
	merge_sort(lst, mid, end);
	merge(arr, low, high, mid)
}


int main() {
	int n{};
	std::string s;
	std::cin >> s;
	
	if(s.length() == 1) {
		std::cout << s;
		return 0;
	}

	int nums[(s.length()/2 + 1)];
	for(int i = 0; i < s.length(); i+=2) {
		nums[i] = s[i] - '0';
		std::cout << nums[i] <<"\n";
	}
	


}
