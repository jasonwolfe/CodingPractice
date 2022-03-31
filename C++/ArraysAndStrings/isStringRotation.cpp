#include <iostream>

/*
    Is subString a rotation of mainString;
*/

using namespace std;

int main(int argc, char *argv[]){

    string mainString = "jason";
    string subString = "sonja";

    string concatString = mainString + mainString;
    cout << "Concat String : " << concatString << endl;
    size_t found = concatString.find(subString, 0);

    if(found != string::npos){
        cout << "yes, it is a rotation";
    }else{
        cout << "no, it is not a rotation";
    }

    return 0;
}