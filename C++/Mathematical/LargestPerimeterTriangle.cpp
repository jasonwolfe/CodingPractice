#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=nums.size()-3; i>=0; i--){
            if(nums[i] + nums[i+1] > nums[i+2]){
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return 0;
    }
        
};

int main(){
    vector<int> sides = {2,1,2};
    Solution *solution = new Solution;
    cout << solution->largestPerimeter(sides);
    return 0;
}