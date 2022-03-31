#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

// Add any helper functions you may need here


int getBillionUsersDay(vector <float> growthRates) {
  // Write your code here
  vector<float> totalUsersVector (growthRates.size());
  int dayIndex = 0;
  long long totalUsers = 0;
  while(totalUsers<1'000'000'000){
    totalUsers = 0;
    for(int i=0; i<growthRates.size(); i++){
      totalUsersVector[i] = pow(growthRates[i],dayIndex+1);
    }
    
    //calculate total users
    
    for(int j=0; j<growthRates.size(); j++){
      totalUsers += totalUsersVector[j];
    }
    //increment day
    dayIndex++;
  }
  return dayIndex;
}


// CODE BELOW THIS LINE PROVIDED WITH QUESTION
// These are the tests we use to determine if the solution is correct.
// You can add your own at the bottom.
void printInteger(int n) {
  cout << "[" << n << "]";
}

int test_case_number = 1;

void check(int expected, int output) {
  bool result = (expected == output);
  const char* rightTick = u8"\u2713";
  const char* wrongTick = u8"\u2717";
  if (result) {
    cout << rightTick << "Test #" << test_case_number << "\n";
  }
  else {
    cout << wrongTick << "Test #" << test_case_number << ": Expected ";
    printInteger(expected); 
    cout << " Your output: ";
    printInteger(output);
    cout << endl; 
  }
  test_case_number++;
}

int main() {

  vector <float> test_1{1.1, 1.2, 1.3};
  int expected_1 = 79;
  int output_1 = getBillionUsersDay(test_1);
  check(expected_1, output_1);

  vector <float> test_2{1.01, 1.02};
  int expected_2 = 1047;
  int output_2 = getBillionUsersDay(test_2);
  check(expected_2, output_2);

  // Add your own test cases here
  
}