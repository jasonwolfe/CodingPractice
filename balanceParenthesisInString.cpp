#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char *argv[]){
    string unbalancedString = "(a((b)";
    stack<int> stack;

    for(int i=0; i<=unbalancedString.length(); i++){
        if(unbalancedString[i] == '(') {
            stack.push(i);
        } else if(unbalancedString[i] == ')') {
            stack.pop();
        }
    }

    while(stack.size()>0){
        cout << "Working String: " + unbalancedString << endl;
        unbalancedString.erase(stack.top(), 1);
        stack.pop();
    }
    
    cout << "Balanced String: " + unbalancedString << endl;    
    return 0;
}