#include <math.h>

//print kth digit from right
//https://practice.geeksforgeeks.org/problems/print-the-kth-digit3520/1



class Solution{
public:
    int kthDigit(int A,int B,int K){ // 5 2 2
        // code here
        long long int value = pow(A,B);
        int temp = 0;
        while(K--){
            //return last digit
            temp = value%10;
            //drop last digiit
            value/=10;
        }
        return temp;
    }   
};

int main(int argc, char* argv[]){
    Solution solution = Solution();
    return solution.kthDigit(3,3,1);
}


