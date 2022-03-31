/*
Sum of Digit is Pallindrome or not
Given a number N.Find if the digit sum(or sum of digits) of N is a Palindrome number or not.
Note:A Palindrome number is a number which stays the same when reversed.Example- 121,131,7 etc.
*/

//https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        //get each digit, then
        int temp = 0;
        int sum = 0;
        while(N){
            temp = N%10;
            sum = sum + temp;
            N/=10;
        }

        int originalValue = sum;
        int newValue = 0;
        
        
        while(sum){
            temp = sum%10;
            newValue = (newValue * 10) + temp;
            sum/=10;
        }
        
        temp = 0;
        int temp2 = 0;
        
        while(originalValue){
            //pop digit off new value
            temp = newValue%10;
            //pop digit off of old value
            temp2 = originalValue%10;
            originalValue/=10;
            newValue/=10;
            if(temp!=temp2){
                return 0;
            }
        }
        return 1;
    }
};

int main(int argc, int*argv[]){
    Solution solution = Solution();
    return solution.isDigitSumPalindrome(12345);
}