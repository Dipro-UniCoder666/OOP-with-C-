#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name ;
    int age ;

    Person(string name, int age) {
        this->name = name ;
        this->age  = age ;
    }
};
class Student : public Person{
public:
int rollno;

 Student(string name, int age, int rollno) : Person(name, age){
    this->rollno = rollno ;
 }
   void getInfo() {
    cout << name << endl ;
    cout << age << endl ;
    cout << rollno << endl ;

   }

};

int main()
{
   Student s1("Dipro Das", 21, 2130);
//    s1.name = "Dipro Das" ;
//    s1.age = 21 ;
//    s1.rollno = 2130 ;


   s1.getInfo();







    return 0;
}
 