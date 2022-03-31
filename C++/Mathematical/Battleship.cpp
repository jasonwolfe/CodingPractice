#include <iostream>
#include <vector>
using namespace std;
// Write any include statements here

double getHitProbability(int R, int C, vector<vector<int>> G) {
  // Write your code here
  int sumOfSquares = R * C;
  int sumOfShips = 0;
  for(int i=0; i<R; i++){
    for(int j=0; j<C; j++){
      if(G[i][j]==1){
        sumOfShips++;
      }
    }
  }
  double prob = (double)sumOfShips / (double)sumOfSquares;
  return prob;
}
