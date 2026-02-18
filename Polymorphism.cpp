#include <iostream>
#include <string>
using namespace std;

//compile-time -> constructor_overloading Plymorphism
// class Student {
// public:
//    string name ;

//    Student() {
//     cout << "Non-parameterized\n" ;
//    }

//    Student(string name){
//     this->name = name ;
//     cout << "Parameterized\n" ; 
//    }

// };

// int main() {
     
//     Student s1("Dipro Das");


//compile-time -> function_overloading Plymorphism
class Print {
public:

   void show(int x) {
    cout << "int : " << x << endl ;
   }
   void show(char ch) {
    cout << "char : " << ch << endl ;
   }   

};

int main() {
     
   Print p1;
   p1.show('D') ;

    return 0 ;
}