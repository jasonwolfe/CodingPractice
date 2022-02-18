//https://practice.geeksforgeeks.org/problems/reverse-digit0316/1

class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    //find the remainder and then do some multiplication and division
		    //n = 54352
		    long long value = 0;
		    long long digit = 0;
		    while(n){
		        digit = n%10;
		        n = n/10;
		        value = (value*10) + digit;
		    }
		    
		    //for each number I pop, I muultiply by 10 and add the digit
		}
};

long long int main(int argc, int*argv[]){
    Solution solution = Solution();
    return solution.reverse_digit(76482736487235487518758153281538);
}