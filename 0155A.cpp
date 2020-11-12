#include <cstdio>

int main() {
	int n{};
	scanf("%d", &n);
	int max{}, min{};
	scanf("%d", &max);
	min = max;
	n--;
	
	int tmp{};
	int cnt{};
	while(n--) {
		scanf("%d", &tmp);
		if(tmp > max) {
			cnt++;
			max = tmp;
		}
		else if(tmp < min) {
			cnt++;
			min = tmp;
		}
	}
	printf("%d", cnt);
}
