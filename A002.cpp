#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int main() {
  map<string, int> tallies;
  vector< pair<string, int> > rounds;
  int n;
  cin >> n;

  //Save the rounds
  string name;
  int score;
  for(int i = 0; i < n; i++) {
    cin >> name >> score;
    rounds.push_back(make_pair(name, score));
    if(tallies[name]) {
      tallies[name] += score;
    }
    else {
      tallies[name] = score;
    }
  }

  //Simulation one: finding max
  int max=0;
  map<string, int>::iterator it = tallies.begin();
  set<string> winners;
  while(it!=tallies.end()) {
    if(it->second > max) {
      max = it->second;
      winners.clear();
      winners.insert(it->first);
    }
    else if(max==it->second) {
      winners.insert(it->first);
    }
    it++;
  }

  //Simulation 2: finding the one that hits max first
  if(winners.size() > 1) {
    tallies.clear();
    for(vector<pair<string,int> >::iterator iter = rounds.begin(); iter!=rounds.end(); iter++) {
      if(tallies[iter->first]) {
        tallies[iter->first] += iter->second;
      }
      else {
        tallies[iter->first] = iter->second;
      }
      if(tallies[iter->first] >= max && winners.count(iter->first) == 1) {
        winners.clear();
        winners.insert(iter->first);
        break;
      }
    }
  }
  cout << *winners.begin() << endl;

  return 0;
}
