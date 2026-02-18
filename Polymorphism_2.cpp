#include <iostream>
#include <string>
using namespace std;

//run-time -> function_overiding Plymorphism
class Parent {
public:
    void getInfo() {
    cout << "Parent class\n" ;
    }
};

class Child : public Parent {
public:
    void getInfo() {
    cout << "Child class\n" ;
   }
   
};

int main() {
     
   Parent p1;
   p1.getInfo() ;

    return 0 ;
}