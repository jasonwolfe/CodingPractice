#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int fib(int n) {
           if(n<=1){
               return n; 
           }
           return fib(n-1) + fib(n-2);
    }
            
};

int main(){
    int num = 15;
    Solution *solution = new Solution;
    cout << solution->fib(num);
    return 0;
}