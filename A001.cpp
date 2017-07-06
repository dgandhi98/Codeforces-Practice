#include <iostream>
#include <math.h>
using namespace std;

int main() {
  long long m,n,a;
  cin >> m >> n >> a;
  cout << (long long)(ceil( (double)(m) / a) * ceil((double)(n) / a )) << endl;
  return 0;
}
