#include <iostream>

/*

"Implement an algorithm to determine if a string has all unique 
characters." - Gayle Mcdowell

*/

using namespace std;

/* 

for future bitstorage version. I couldn't resist writing them out
at the moment.

int setBit(int num, int i){
    return num | (1 << i);
}

bool getBit(int num, int i){
    return (num & (1 << i) != 0);
}

*/


int main(int argc, char *argv[]){

    string testString = "lkhjwerasdfncv";
    int storage = 0;
    bool charSet[128] = {0};

    for(int i = 0; i<testString.length(); i++){
        int value = testString[i];
        if(charSet[value] == 1){
            cout << "the string does not contain all unique characters";
            return false;
        }
        charSet[value] = 1;
    }
    cout << "Looks like it's all unique characters";
    return true;
}