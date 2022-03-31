#include <iostream>

using namespace std;

class Solution {
public:
    bool containsChar(string s, char c){
        for(int i=0; i<s.size(); i++){
            if(s[i]==c){
                return true;
            }
        }
        
        return false;
    }
    
    int lengthOfLongestSubstring(string s) {
       int largestSubStringSize = 0;
       string subString = "";
       for(int i=0; i<s.size(); i++){
           if(containsChar(subString,s[i])){
               subString += s[i];
               largestSubStringSize = (largestSubStringSize<subString.size()) ? subString.size() : largestSubStringSize;
           }else{
               subString = "";
           }
        }
        return largestSubStringSize;
    }
};

int main(){
    Solution *solution = new Solution();
    cout << solution->lengthOfLongestSubstring("abcabcbb");
    return 0;
}