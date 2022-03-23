#include <iostream>

using namespace std;

class Solution {
public:
    int hammingWeight(unsigned int n) {
        int bits = 0;
        unsigned int mask = 1;
        for(int i=0; i<32; i++){
            if((n & mask) != 0){
                bits++;
            }
            mask <<= 1;
        }
        return bits;
    }
};

int main(){
    unsigned int num = 11;
    Solution *solution = new Solution;
    cout << solution->hammingWeight(num);
    return 0;
}