#include <iostream>
#include <vector>

/*

Given an array of integers (which may include repeated integers), 
determine if there's a way to split the array into two subsequences 
A and B such that the sum of the integers in both arrays is the 
same, and all of the integers in A are strictly smaller than all 
of the integers in B.

Note: Strictly smaller denotes that every integer in A must be less 
than, and not equal to, every integer in B.

*/


using namespace std; 

vector<int> merge(vector<int> arr, vector<int> secondary, int low, int mid, int high){
  // coppy both halves into the secondary array;
  for(int i=low; i<=high; i++){
    secondary[i] = arr[i];
  }
  
  int secondaryLeft = low;
  int secondaryRight = mid + 1;
  int current = low;
  
  while(secondaryLeft <= mid && secondaryRight <= high){
    if(secondary[secondaryLeft] <= secondary[secondaryRight]){
      arr[current] = secondary[secondaryLeft];
      secondaryLeft++;
    }else{
      arr[current] = secondary[secondaryRight];
      secondaryRight++;
    }
    current++;
  }
  
  
  int remaining = mid - secondaryLeft;
  for(int i=0; i<=remaining; i++){
    arr[current + i] =  secondary[secondaryLeft + i];
  }
  return arr;

}

vector<int> mergeSortA(vector<int> arr, vector<int> secondary, int low, int high){
  if(low<high){
    int middle = low + (high - low)/2;
    mergeSortA(arr, secondary, low, middle);
    mergeSortA(arr, secondary, middle+1, high);
    merge(arr, secondary, low, middle, high);
  }
  return arr;
}

// Add any helper functions you may need here
vector<int> mergeSort(vector<int> arr){
  vector<int> secondary = arr;
  arr = mergeSortA(arr, secondary, 0, arr.size()-1);
  return arr;  
}

bool matchingHalves(vector<int> arr, int mid){
  int sum1 = 0;
  for(int i=0; i<mid; i++){
    sum1 += arr[i];
  }
  int sum2 = 0;
  for(int i=mid; i<arr.size(); i++){
    sum2 += arr[i];
  }
  if(sum1==sum2){
    return true;
  }
  return false;
}

bool balancedSplitExists(vector<int>& arr){
  // Write your code here 
  //first balance the array
  arr = mergeSort(arr); 
  for(int i=0; i<arr.size(); i++){
    int mid = i;
    if(matchingHalves(arr, mid)){
      return true;
    }
    
  }
  return false;
}










//CODE BELOW LINE 97 WAS PROVIDED WITH QUESTION
//I AM NOT THE ORIGINAL AUTHOR OF CODE BELOW THIS LINE

// These are the tests we use to determine if the solution is correct.
// You can add your own at the bottom.

void printString(string& str) {
  cout << "[\"" << str << "\"]";
}

int test_case_number = 1;

void check(bool expected, bool output) {
  bool result = (expected == output);
  const char* rightTick = u8"\u2713";
  const char* wrongTick = u8"\u2717";
  if (result) {
    cout << rightTick << "Test #" << test_case_number << "\n";
  }
  else {
    cout << wrongTick << "Test #" << test_case_number << ": Expected ";
    printf("%s", expected ? "true" : "false");
    cout << " Your output: ";
    printf("%s", output ? "true" : "false");
    cout << endl; 
  }
  test_case_number++;
}

int main(){
  // Testcase 1
  vector<int> arr_1{2, 1, 2, 5};
  bool expected_1 = true;
  bool output_1 = balancedSplitExists(arr_1); 
  check(expected_1, output_1); 
  
  // Testcase 2
  vector<int> arr_2{3, 6, 3, 4, 4};
  bool expected_2 = false;
  bool output_2 = balancedSplitExists(arr_2); 
  check(expected_2, output_2); 

  // Add your own test cases here
  
  return 0; 
}