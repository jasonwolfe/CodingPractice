#include <iostream>
#include <bits/stdc++.h>

/*
    Check Permutation : "Given two strings, write a method to decide 
    if one is a permutation of the other" - Gayle McDowell 
*/

using namespace std;

void sortString(string &unsortedString)
{
   sort(unsortedString.begin(), unsortedString.end());
   cout << unsortedString << endl;
}

int main(int argc, char *argv[]){
    //details: whitespace matters, case is significant
    string string1 = "jason";
    string string2 = "ajosn";

    //must be equal lengths
    if(string1.length() != string2.length()){
        cout << "strings are different lengths, so ther isn't a permutation here." << endl;
        return 0;
    }
    
    sortString(string1);
    sortString(string2);
    if(string1==string2){
        cout << "strings are permutations of each other";
    }

    return 1;
}