#include <iostream>
// Add any extra import statements you may need here

using namespace std;

/*

One simple way to encrypt a string is to "rotate" every alphanumeric character
by a certain amount. Rotating a character means replacing it with another 
character that is a certain number of steps away in normal alphabetic or numerical order.
For example, if the string "Zebra-493?" is rotated 3 places, the resulting 
string is "Cheud-726?". Every alphabetic character is replaced with the character
3 letters higher (wrapping around from Z to A), and every numeric character 
replaced with the character 3 digits higher (wrapping around from 9 to 0). 
Note that the non-alphanumeric characters remain unchanged.
Given a string and a rotation factor, return an encrypted string.

*/


// Add any helper functions you may need here

string rotationalCipher(string input, int rotationFactor) {
  // Write your code here  
  int rotationFactorString = rotationFactor%26;
  int rotatationFactorDigit = rotationFactor%10;
  string alphaLower = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
  string alphaUpper = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string numeric = "01234567890123456789";
  int index = 0;
  
  for(int i=0; i<input.length(); i++){
    if(input[i] >= '0' && input[i] <='9'){
    //it's an integer, rotate using
      //find the first occurance of the char in the string, then add the rotation factor
      index = numeric.find(input[i]);
      input[i] = numeric[index + (rotationFactor%10)]; 
    }

    if(input[i] >= 'a' & input[i] <= 'z'){
      //it's a lowercase letter
      index = alphaLower.find(input[i]);
      input[i] = alphaLower[index + (rotationFactor%26)]; 
    }

    if(input[i] >= 'A' & input[i] <= 'Z'){
      //it's an uppercase letter
      index = alphaUpper.find(input[i]);
      input[i] = alphaUpper[index + (rotationFactor%26)]; 
    }
  }
  
  return input;
}



// These are the tests we use to determine if the solution is correct.
// You can add your own at the bottom.
//NOTICE: The code below was included with the question, I am not the original author
//printString, check() or main()

void printString(string& str) {
  cout << "[\"" << str << "\"]";
}

int test_case_number = 1;

void check(string& expected, string& output) {
  bool result = (expected == output);
  const char* rightTick = u8"\u2713";
  const char* wrongTick = u8"\u2717";
  if (result) {
    cout << rightTick << "Test #" << test_case_number << "\n";
  }
  else {
    cout << wrongTick << "Test #" << test_case_number << ": Expected ";
    printString(expected); 
    cout << " Your output: ";
    printString(output);
    cout << endl; 
  }
  test_case_number++;
}

int main() {

  string input_1 = "All-convoYs-9-be:Alert1.";
  int rotationFactor_1 = 4;
  string expected_1 = "Epp-gsrzsCw-3-fi:Epivx5.";
  string output_1 = rotationalCipher(input_1, rotationFactor_1);
  check(expected_1, output_1);

  string input_2 = "abcdZXYzxy-999.@";
  int rotationFactor_2 = 200;
  string expected_2 = "stuvRPQrpq-999.@";
  string output_2 = rotationalCipher(input_2, rotationFactor_2);
  check(expected_2, output_2);

  // Add your own test cases here
  
}