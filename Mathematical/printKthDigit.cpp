#include <math.h>

//print kth digit from right
//https://practice.geeksforgeeks.org/problems/print-the-kth-digit3520/1

class Solution{
public:
    int kthDigit(int A,int B,int K){ // 5 2 2
        // code here
        long long int value = pow(A,B);
        int temp;
        while(K--){
            //return last digit
            temp = value%10;
            //drop last digiit
            value/=10;
        }
        return temp;
    }
};

long long int main(int argc, int*argv[]){
    Solution solution = Solution();
    return solution.kthDigit(5,10,2);
}