#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

bool hasNoMults(long long n) {
if(n%2==0) return false;
/*

long long low = 0;
long long high = n;
long long mid{};
while(low <= high) {
mid = (high - low)/2 + low;
if(mid*mid == n) {
	return true;
}
else if(mid*mid < n) {
	low = mid + 1;
}
else if(mid*mid > n) {
	high = mid -1;
}
}
return false;
*/

long long i{};
for(i = 3; i*i < n; i+=2) {
	if(n%i==0) return false;
	//else if(i*i == n) return true;
}
return true;
}

int main() {
	int n{};
	cin >> n;

	long long tmp{};
	forn(n) {
		cin >> tmp;
		auto rt = sqrt(tmp);
		if(tmp <= 3) {
			cout << "NO\n";
		}
		else if(tmp == 4) {
			cout << "YES\n";
		}
		else if(rt == int(rt)) {
			if(hasNoMults(tmp))
				cout << "YES\n";
			else cout << "NO\n";
		}
		else { 
			cout << "NO\n";
		}
	}
}
