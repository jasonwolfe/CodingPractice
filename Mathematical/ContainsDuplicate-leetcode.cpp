#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> digits;
        for(int i=0; i<=nums.size()-1; i++){
            if(digits[nums[i]]>0){
                return true;
            }else{
                digits[nums[i]] = digits[nums[i]] + 1;
            }
        }
        return false;
    }
};

int main(){
    Solution *solution = new Solution;
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    cout << solution->containsDuplicate(nums);
    return 0;
}