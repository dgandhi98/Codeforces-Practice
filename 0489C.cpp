#include <cstdio>

int main() {
	int m, s;
	scanf("%d %d", &m, &s);
	int max_num[101] = {0};
	int min_num[101] = {0};

	if (m==1 && s==0) {printf("0 0"); return 0;}
	if (s==0 || s > 9*m)  {printf("-1 -1"); return 0;}
	int remaining_sum = s;
	int k = m-1;
	remaining_sum -= 1;
	while(remaining_sum && k >= 0) {
		if(remaining_sum < 9) {
			min_num[k] = remaining_sum;
			remaining_sum = 0;
		}
		else {
			min_num[k] = 9;
			remaining_sum -= 9;
		}
		k--;
	}
	min_num[0] += 1;

	remaining_sum = s;
	int i = 0;
	while(remaining_sum && i < m) {
		if(remaining_sum < 9) {
			max_num[i] = remaining_sum;
			remaining_sum = 0;
		}
		else {
			max_num[i] = 9;
			remaining_sum -= 9;
		}
		i++;
	}
	
	for(int j = 0; j < m; j++) printf("%d", min_num[j]);
	printf(" ");
	for(int j = 0; j < m; j++) printf("%d", max_num[j]);

}
