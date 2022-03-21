#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//Given a Binary Number B, find its decimal equivalent.
//https://practice.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1

class Solution
{
	public:
		int binary_to_decimal(std::string str)
		{
            int value = 0;
            int power = 0;
    	    for(int i=str.size()-1; i>=0; i--){
    	       if(str[i]=='1'){
    	           value += pow(2,power);
    	       }
    	       power++;
    	    }
    	    return value;
    	}
};

int main(int argc, char* argv[]){
    Solution solution = Solution();
	cout << solution.binary_to_decimal("10001000");
    return 0;
}