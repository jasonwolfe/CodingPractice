#include <iostream>
#include <vector>
using namespace std;

int recursiveBinarySearch(vector<int> sortedArray, int low, int high, int x){
    if(low > high){
        cerr << "ERROR: low is greater than high" << endl;
        return -1;
    }

    int mid = low + (high - low)/2;

    if(sortedArray[mid]<x){
        recursiveBinarySearch(sortedArray, mid+1, high, x);
    }else if(sortedArray[mid]>x){
        recursiveBinarySearch(sortedArray, low, mid-1, x);
    }else{
        return mid;
    }
}

int main(int argc, char* argv[]){
    vector<int> array = {1,2,3,4,5,6,7,8,9};
    return recursiveBinarySearch(array, 0, array.size()-1, 3);
}