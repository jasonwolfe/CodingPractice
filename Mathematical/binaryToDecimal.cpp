#include <string>
#include <math.h>

//Given a Binary Number B, find its decimal equivalent.
//https://practice.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1

class Solution
{
	public:
		int binary_to_decimal(std::string str)
		{
            int value = 0;
            int power = 0;
            int x = str.size();
    	    for(int i=x-1; i>=0; i--){
    	       if(str[i]=='1'){
    	           value += pow(2,power);
    	       }
    	       power = power+1;
    	    }
    	    return value;
    	}
};

long long int main(int argc, int*argv[]){
    Solution solution = Solution();
    return solution.binary_to_decimal("10001000");
}