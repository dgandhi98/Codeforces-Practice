#include <iostream>
using namespace std;

int main() {
  int numRows;
  int numCols;
  string rows[8];
  for(int i = 0; i < 8;i++)
    getline(cin, rows[i]);

  //check rows
  for(int i = 0; i < 8; i++) {
    if(rows[i]=="BBBBBBBB") {
      numRows++;
    }
  }

  //check cols
  if(numRows!=8) {
    for(int i = 0; i < 8; i++) {
      if(rows[0][i]=='B') {
        for(int j = 0; j < 8; j++) {
          if(rows[j][i]!='B') {
            break;
          }
          else if(j==7) {
            numCols++;
          }
        }
      }
    }
  }
  cout << numRows + numCols <<endl;
  return 0;
}
