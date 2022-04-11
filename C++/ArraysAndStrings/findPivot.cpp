#include <iostream>
#include <vector>
#include <numeric>

/*

Author: Jason Wolfe
Date: 04/08/2022
Find Pivot for List

*/

using namespace std;

class Solution{
    private:
       vector<int> intVector;
    public:
        // brute force version, repeatedly sum up left and right side
        // O(N^2) time and O(1) space
        int find_pivot(vector<int> intVector){
            for(int i=0; i<(sizeof(intVector)/sizeof(int)); i++){
                int leftSum = 0;
                int rightSum  = 0;

                for(int j=0; j<i; j++){
                    leftSum+=intVector[j];
                }
                
                for(int k=i+1; k<=(sizeof(intVector)/sizeof(int))+1; k++){
                    rightSum+=intVector[k];
                }

                if(rightSum == leftSum){
                    cout << "The pivot is: " << intVector[i];
                    return intVector[i];
                }
            }
            cout << "-1, pivot does not exist";
            return -1;
        }

        // get sum of total, then subtract left side
        // O(N) time and O(1) space
        int find_pivot_v2(vector<int> intVector){
            int total = accumulate(intVector.begin(), intVector.end(), 0);
            int leftSide = 0;
            
            for(int i=0; i<(sizeof(intVector)/sizeof(int)); i++){
                if(leftSide == (total - leftSide - intVector[i])){
                    cout << intVector[i];
                    return intVector[i];
                }
                leftSide += intVector[i];
            }

            cout << "-1, pivot does not exist";
            return -1;
        }

        // O(N) time and O(1) space
        // cleaner syntax
        int find_pivot_v3(vector<int> intVector){
            int total = accumulate(intVector.begin(), intVector.end(), 0);
            int leftSide = 0;
            
            for(int i=0; i<(sizeof(intVector)/sizeof(int)); i++){
                total -= intVector[i];
                if(leftSide == total){
                    cout << intVector[i];
                    return intVector[i];
                }
                leftSide += intVector[i];
            }

            cout << "-1, pivot does not exist";
            return -1;
        }
};

int main(){
    Solution *solution = new Solution();
    vector<int> nums = {1,2,3,4,6,5,4,1};
    int mySolution = solution->find_pivot_v3(nums);
    return 0;
}