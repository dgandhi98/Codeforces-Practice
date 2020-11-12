#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	char start[3], end[3];
	scanf("%2s\n", start);
	scanf("%2s", end);

	int start_col = start[0] - 'a';
	int start_row = start[1] - '1';
	int end_col = end[0] - 'a';
	int end_row = end[1] - '1';

	char NS = (end_row > start_row) ? 'U':'D';
	char EW = (end_col > start_col) ? 'R':'L';
	
	int res = 0;
	int diag_dist = min(abs(end_row-start_row), abs(end_col-start_col));
	int rem_row_dist = abs(end_row - start_row) - diag_dist;
	int rem_col_dist = abs(end_col - start_col) - diag_dist;
	res = diag_dist + rem_row_dist + rem_col_dist;
	
	printf("%d\n", res);
	while(diag_dist--) {
		printf("%c%c\n", EW, NS);
	}
	while(rem_row_dist > 0) {
		printf("%c\n", NS);
		rem_row_dist--;
	}
	while(rem_col_dist > 0) {
		printf("%c\n", EW);
		rem_col_dist--;
	}

}
