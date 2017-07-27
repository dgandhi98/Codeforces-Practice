#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
  string path;
  cin >> path;
  int ind = 0;
  while(ind < path.length()-1) {
    if(path[ind]=='/' && path[ind+1]=='/') {
      if(ind != path.length()-2) {
        path = path.substr(0,ind+1) + path.substr(ind+2);
      }
      else {
        path = path.substr(0,ind+1);
      }
      ind--;
    }

    ind++;
  }
  if(path[path.length()-1]=='/' && path.length()!=1) {
    path = path.substr(0,path.length()-1);
  }
  cout << path;
  return 0;
}
