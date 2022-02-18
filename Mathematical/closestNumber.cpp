#include <math.h>
/*
https://practice.geeksforgeeks.org/problems/closest-number5728/1
Given non-zero two integers N and M. The problem is to find the number closest to N 
and divisible by M. If there are more than one such number, then output the one having 
maximum absolute value.

HINT:   Find the quotient q when n is divided by m. And store q*m in a variable(say x). Make another 
        variable(say y) and if n*m is negative then store q*(n-1) in y otherwise store q*(n+1) in it. 
        Now if abs(y-n) > abs(x-n) print x as your answer otherwise print y as the answer.
*/

class Solution {
  public:
    int closestNumber(int N , int M) {
        
        int q = 0;
        int x = 0;
        int y = 0;

        q = N/M;
        x = q*M;
        
        if((N*M)<0){
            y = M*(q-1);
        }else{
            y = M*(q+1);
        }
        
        
        if(abs(y-N)>abs(x-N)){
            return x;
        }else{
            return y;
        }
    }
};

long long int main(int argc, int*argv[]){
    Solution solution = Solution();
    return solution.closestNumber(13, 3);
}