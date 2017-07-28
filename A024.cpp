#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int printArray(int n, int edges[][4]) {
  for(int i = 1; i < n+1; i++) {
    for(int j = 0; j < 4;j++) {
      cout << edges[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

int getCostForDir(int n, int (edges)[][4], int startEdge) {
  //cout << startEdge << endl;
  int cost = 0;
  int curr = 1;
  int edgesVisited = 0;
  if(edges[startEdge][0]==curr) {
    curr = edges[startEdge][1];
    cost += 0;
    edges[startEdge][3] = 1;
    edgesVisited++;
  }
  else {
    curr = edges[startEdge][0];
    cost += edges[startEdge][2];
    edges[startEdge][3] = 1;
    edgesVisited++;
  }

  int dir = 0;
  for(int i = 1; i < n+1 && edgesVisited < n; i++) {
    if(edges[i][dir]==curr && !edges[i][3]) {
      edgesVisited++;
      //cout << "curr: " << curr;
      curr = edges[i][(!dir)]; //get the new curr to look for
      //cout << "   new curr: " << curr << endl;
      //printArray(n, edges);
      edges[i][3] = 1;
      cost += ((dir))*edges[i][2]; //0 or the cost
      dir = 0;
      i = 0; // start loop over
    }
    else if(i == n && dir==0) { // if we havent found & we're on the last one
        dir = 1;
        i = 0;
    }
  }
  //printf("-------------------------\n");
  return cost;
}

int main() {
  int n;
  cin >> n;
  int startPts[2] = {0};
  int edges[n+1][4]; // a_i, b_i, weight, visited
  int curr = 0;
  for(int i = 1; i < n+1; i++) {
    for(int j = 0; j < 3; j++) {
      cin >> edges[i][j];
      if(edges[i][j]==1 && j < 2) {
        if(startPts[0]==0) {
          startPts[0] = i;
        }
        else {
          startPts[1] = i;
        }
      }
    }
    edges[i][3] = 0;
  }

  int strt = startPts[0];
  int cost1 = getCostForDir(n, edges, strt);

  for(int i = 1; i < n+1; i++) {
    edges[i][3] = 0;
  }
  strt = startPts[1];
  int cost2 = getCostForDir(n, edges, strt);

  int minCost = (cost1<cost2)?cost1:cost2;

  //cout << cost1 << " " << cost2 << endl;

  cout << minCost;

}
