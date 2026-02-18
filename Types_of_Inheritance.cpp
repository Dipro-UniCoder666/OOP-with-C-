#include <iostream>
#include <string>
using namespace std;

//Multi-level Inheritance
// class Person {
// public:
//      string name ;
//      int age ;
// };

// class Student : public Person{
// public:
//       int rollno ;
// };

// class GradStudent : public Student {
// public:
//       string researchArea ;
// };

// int main() {

//  GradStudent s1 ;
//  s1.name = "Dipro Das" ;
//  s1.researchArea = "Machine Learning" ;

//  cout << s1.name << endl ;
//  cout << s1.researchArea << endl ;


//Multiple Inheritance
class Student {
public:
     string name ;
     int rollno ;
};

class Teacher {
public:
      string subject ;
      double salary ;
};

class TA : public Student, public Teacher {
public:
    
};

int main() {

 TA t1 ;
 t1.name = "Dipro Das" ;
 t1.subject = "EEE" ;

 cout << t1.name << endl ;
 cout << t1.subject << endl ;

//Hierarchical Inheritance
// class Person {
// public:
//      string name ;
//      int age ;
// };

// class Student : public Person {
// public:
//      int rollno ;
// };

// class Teacher : public Person {
// public:
//      string subject ;  
// };

// int main() {

//  TA t1 ;
//  t1.name = "Dipro Das" ;
//  t1.subject = "EEE" ;

//  cout << t1.name << endl ;
//  cout << t1.subject << endl ;









    return 0;
}