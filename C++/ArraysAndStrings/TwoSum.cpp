#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int indexLow = 0;
        int indexHigh;
        //size = 3, indexes 0,1,2
        for(int i=indexLow; i<=nums.size()-2; i++){
            indexHigh = i+1;
            while(indexHigh<=nums.size()-1){
                if(target==nums[i] + nums[indexHigh]){
                    return {i, indexHigh};
                }else{
                    indexHigh++;
                }
            }
            
        }
        return {0,0};
    }
};

int main(){
    Solution *solution = new Solution();
    vector<int> nums = {3,2,4};
    vector<int> mySolution = solution->twoSum(nums, 6);

    return 0;
}