#include <iostream>
#include <string>
using namespace std;

int main() {
  int numInChat=0;
  string command;
  int traffic=0;
  while(getline(cin, command)){
    if(command[0]=='+') {
      numInChat++;
    }
    else if(command[0]=='-') {
      numInChat--;
    }
    else {
      traffic += (command.size()-command.find(":")-1) * numInChat;
    }
  }
  cout << traffic << endl;
  return 0;
}
