#include <iostream>
#include <string>
using namespace std;

class Teacher{

private:
    double salary;

public:

//non-parameterized
// Teacher (){
//     Dept = "CSE" ;
// }

    string name;
    string Dept;
    string Sub;


//parameterized
Teacher(string name, string Dept, double salary){
    this->name = name ;
    this->Dept = Dept ;
    this->Sub = Sub ;
    this->salary = salary ;
}

//copy constructot
Teacher(Teacher &orgObj){
    cout << "I am custom copy constructor\n" ;
    this->name = orgObj.name ;
    this->Dept = orgObj.Dept ;
    this->Sub = orgObj.Sub ;
    this->salary = orgObj.salary ;
}

//Method/Member Function
void changeDept(string newDept){
        Dept = newDept ;
}

void setSalary(double s){
        salary = s;
}

double getSalary(){
       return salary ;
}

void getInfo(){
    cout << name << endl ;
    cout << Sub << endl ;
}
 

};


int main()
{
  
    // Teacher t1;

    // t1.name = "Shamim Imtiaz" ;
    // t1.Dept = "CSE" ;
    // t1.Sub = "OOP With C++ Sessional" ;
    // t1.setSalary(50000) ;

    // cout << t1.name << endl ;
    // cout << t1.getSalary() << endl ;
    // cout << t1.Dept << endl ;

    Teacher t1("Dipro Das", "CSE", 30000 ) ;

    Teacher t2(t1) ;
    t2.getInfo() ;

    return 0;
}