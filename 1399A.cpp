#include <cstdio>
#include <algorithm>

int main() {
	int a{};
	scanf("%d", &a);
big:while(a--) {
	int x[1002] = {0};
	int n{};
	scanf("%d", &n);
	for(int i = 0; i < n; i++) 
		scanf("%d", &x[i]);
	if(n==1){
	printf("YES\n");continue;
	}
	std::sort(x, x+n);
	bool pYes = true;
	for(int i = 1; i < n; i++) {
		if(x[i]-x[i-1] > 1) {
		printf("NO\n"); pYes = false; break;
		}
	}
	if(pYes)
	printf("YES\n");
	}

}
