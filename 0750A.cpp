#include <cstdio>

// Number of test cases, on the fly calc
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int x = 240-k;
	int i = 1;

	//printf("%d\n", x);	
	while(x >= 0 && i <= n) {
		x -= 5*i;
		i += 1;
	}
	if(x < 0)
		printf("%d", i-2);	
	else printf("%d", i-1);
}

