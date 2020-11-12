#include <cstdio>
#include <vector>
#include <utility>

using namespace std;

#define ii pair<int, int>
#define vii vector<pair<int,int>>
int numX (int n, int x) {
	int cnt{0};
	if(n==0) return 0;
	while(n % x == 0) {
		n /= x;
		cnt++;

	}
	return cnt;
}
int main() {
	int TC;
	scanf("%d", &TC);

	vector<vii> vals(TC);

	int zero_i{-1};
	for(int i = 0; i < TC; i++) {
		vals[i] = vii(TC);
		for(int j = 0; j < TC; j++) {
			int v;
			scanf("%d", &v);
			if(v == 0) {
				zero_i = i;
				continue;
			}
			ii p = make_pair(numX(v, 2), numX(v, 5));
			if(i==0 && j==0) {
				vals[0][0] = p;
			}
			else if(i == 0) {
				vals[0][j].first = vals[0][j-1].first + p.first;
			      	vals[0][j].second = vals[0][j-1].second + p.second;
			}
			else if(j == 0) {
				vals[i][0].first = vals[i-1][0].first + p.first;
				vals[i][0].second = vals[i-1][0].second + p.second;
			}
			else {
				vals[i][j].first = min(vals[i][j-1].first, vals[i-1][j].first) + p.first;
				vals[i][j].second = min(vals[i][j-1].second, vals[i-1][j].second) + p.second;
			}
		}
	}
	
	bool from_2{false};
	int res{0};
	if(vals[TC-1][TC-1].first < vals[TC-1][TC-1].second) {
		from_2 = true;
		res = vals[TC-1][TC-1].first;
	}
	else {
		from_2 = false;
		res = vals[TC-1][TC-1].second;
	}

	int n{TC};
	char path[2*(n-1)];
	if(zero_i > -1 && res > 0) {
		int pi{0};
		for(int i = 0; i < zero_i; i++) path[pi++] = 'D';
		for(int j = 0; j < n-1; j++) path[pi++] = 'R';
		for(int i = zero_i; i < n-1; i++) path[pi++] = 'D';
		printf("%d\n", 1);
		for(int i = 0; i <2*(n-1); i++) printf("%c", path[i]);
		return 0;
	}

	int x{n-1}, y{n-1};

	int pi{2*(n-1)-1};
	int len_pi{0};
	if(from_2) {
		while(x!= 0 || y!=0) {
			if(x==0) {
				path[pi] = 'R';
				y--;
				pi--;
			}
			else if(y==0) {
				path[pi] = 'D';
				x--;
				pi--;
			}
			else {
				if(vals[x][y-1].first < vals[x-1][y].first) {
					path[pi] = 'R';
					y--;
					pi--;
				}
				else {
					path[pi] = 'D';
					x--;
					pi--;
				}
			}
			len_pi++;
		}


	}
	else {
		while(x!= 0 || y!=0) {
			if(x==0) {
				path[pi] = 'R';
				y--;
				pi--;
			}
			else if(y==0) {
				path[pi] = 'D';
				x--;
				pi--;
			}
			else {
				if(vals[x][y-1].second < vals[x-1][y].second) {
					path[pi] = 'R';
					y--;
					pi--;
				}
				else {
					path[pi] = 'D';
					x--;
					pi--;
				}
			}
			len_pi++;
		}
	}

	printf("%d\n", res);
	for(int i = 2*(n-1)-len_pi; i < 2*(n-1); i++) printf("%c", path[i]);
	//printf("%s\n", path);
}


