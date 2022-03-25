#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<vector<int>> closestPointIndexMap = {{0,0}};
        closestPointIndexMap[0][0] = 10000;
        closestPointIndexMap[0][1] = 0;
        bool valid = false;
        for(int i=0; i<points.size(); i++){
            //check for validity
            if(points[i][0] == x || points[i][1] == y){
                valid = true;
                int deltaX = abs(points[i][0] - x);
                int deltaY = abs(points[i][1] - y);
                int manDist = deltaX + deltaY;
                if(manDist < closestPointIndexMap[0][0]){
                    closestPointIndexMap[0][0] = manDist;
                    closestPointIndexMap[0][1] = i;
                }
            }
        }
        if(valid){
            return closestPointIndexMap[0][1]; 
        }else{
            return -1;
        }
        
    }
};

int main(){
    Solution *solution = new Solution();
    vector<vector<int>> tempPoints = {{1,2},{3,1},{2,4},{2,3},{4,4}};
    cout << solution->nearestValidPoint(3,4,tempPoints);
    return 0;
}