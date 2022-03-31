#include <iostream>
#include <vector>
using namespace std;

int recursiveBinarySearch(vector<int> sortedArray, int low, int high, int x){
    if(low > high){
        cerr << "ERROR: low is greater than high" << endl;
        return -1;
    }
    int output = 0;

    int mid = low + (high - low)/2;

    if(sortedArray[mid]<x){
        mid = recursiveBinarySearch(sortedArray, mid+1, high, x);
    }else if(sortedArray[mid]>x){
        mid = recursiveBinarySearch(sortedArray, low, mid-1, x);
    }
    return mid;
}

int main(int argc, char* argv[]){
    vector<int> array = {1,2,3,4,5,6,7,8,9};
    int returnValue = recursiveBinarySearch(array, 0, array.size()-1, 3);
    cout << returnValue << endl;
    return returnValue;
}