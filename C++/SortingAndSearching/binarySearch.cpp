#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int> sortedArray, int x){
    int low = 0;
    int high = sortedArray.size() - 1;

    while(low<=high){
        int mid = low + (high - low)/2;

        if(sortedArray[mid]<x){
            low = mid + 1;
        }else if(sortedArray[mid]>x){
            high = mid -1;
        }else{
            return mid;
        }
    }
   
    return false;
}

int main(int arc, char*argv[]){
    vector<int> array = {1,2,3,4,5,6,7,8,9};
    bool found = binarySearch(array, 5);
    return found;
}