#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <math.h>

using namespace std;

bool testSingleDigitExample(string encoding, string baseString){

    int encodingIndex = 0;
    int stringIndex = 0;

    int testCharInt = (int)'0';
    int testCharInt2 = (int)'9';

    for(int i=0; i<=encoding.size()-1; i++){
    //if number, increment stringIndex

        int encodingInt = (int)encoding[i];
        char baseStringStringIndex = baseString[stringIndex];
        char encodingI = encoding[i];
        if(encodingInt > '0' && encodingInt < '9'){
            //encoding is a number, so increment stringIndex by this value
            stringIndex += (int)encoding[i] - (int)'0'; 
        }else if(!(encodingI == baseStringStringIndex)){
            return false;
        }else{
            stringIndex++;
        }
        
        //if character, check for equality
        }
    return true;

}

int convertStringToNumber(string stringValue){
    int returnValue = 0;
    for(int i = stringValue.size(); i>0; i--){
        char tempChar = stringValue[i-1];
        if(tempChar == '-'){
            returnValue = (-returnValue);
        }else{
            returnValue += pow(10, stringValue.size()-i) * (int)(stringValue[i-1]-'0');
        }
    }
    return returnValue;
}

int main(int argc, char *argv[]){

    string encoding = "f2eb2k1";
    string baseString = "facebook";

    bool results = testSingleDigitExample(encoding, baseString);
    cout << "results = " << results;

    int newNumber = convertStringToNumber("-123");
    cout << newNumber;
    return 0;

}