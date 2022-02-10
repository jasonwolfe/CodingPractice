/*

empty
size
front
back
push_back
pop_front

*/

#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char *argv[]){

    queue<int> queueOfIntegers;
    for(int i=0; i<10; i++){
        queueOfIntegers.push(i);
    }

    for(int i=0; i<10; i++){
        cout << queueOfIntegers.front();
        queueOfIntegers.pop();
    }
}