#include <iostream>
#include <stack>

using namespace std;

class Person{
    public:
        static const bool mammal = true;

    public:
        int age;
        float height;
        void greet();
        virtual void sayName() = 0;

};

void Person::greet(){
    std::cout << "Hello I am a person" << std::endl;
}

template <typename myType>
myType GetMax (myType a, myType b) {
 return (a>b?a:b);
}

class Engineer : public Person{
    
    public:
        void work(){
            cout << "Engineer Working: Writing Software"  << endl;
        }
        void sayName(){
            cout << "I'm a Person, with no name" << endl;
        }

};

int main(int argc, char *argv[]){
    Engineer *jason = new Engineer();
    jason->age = 47;
    cout << "Mammal: " << jason->mammal << endl;
    jason->greet();
    jason->work();
    jason->sayName();
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    delete jason;

}