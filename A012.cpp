#include <iostream>
#include <stdio.h>
using namespace std;

int checkSymmetry(char board[]) {
  for(int i = 0; i < 4;i++) {
    if(board[i]!=board[8-i]) {
      return 0;
    }
  }
  return 1;
}

int main() {
    char board[9];
    for(int i = 0; i < 9; i++) {
      cin >> board[i];
    }

    if(checkSymmetry(board)) {
      cout << "YES";
    }
    else {
      cout << "NO";
    }
}
