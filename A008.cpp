#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// as long as they exist...
int findIfForward(string sequence, string station1, string station2) {
    int pos1 = sequence.find(station1);
    if(pos1==-1) {
      return 0;
    }
    int pos2 = sequence.find(station2,pos1+station1.length());
    if(pos2==-1) {
      return 0;
    }
    return 1;
}
int main () {
  string sequence;
  string station1;
  string station2;
  getline(cin, sequence);
  getline(cin, station1);
  getline(cin, station2);
  int backward = 0;
  int forward = 0;
  forward = findIfForward(sequence, station1, station2);
  reverse(sequence.begin(),sequence.end());
  backward = findIfForward(sequence, station1, station2);

  if(backward==0 && forward==0) {
    cout << "fantasy";
  }
  else if(backward==1 && forward==0) {
    cout << "backward";
  }
  else if(backward==0 && forward==1) {
    cout << "forward";
  }
  else {
    cout << "both";
  }
  return 0;

  //daaabaaabaacaadaab
}
