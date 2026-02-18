#include <iostream>
#include <string>
using namespace std;

class Student {

public:
 
     string name ;
     double* cgpaPtr ;

     Student(string name , double cgpa) {
        this->name = name ;
        cgpaPtr = new double ;
        *cgpaPtr = cgpa ;
     }
    
    //destructor
    ~Student(){
        cout<< "Hi, I can delete anything\n" ;
        delete cgpaPtr ;    //memory leak
    }

void getInfo() {
    cout<<name<<endl ;
    cout<<*cgpaPtr<<endl ;
}
 

};


int main()
{
  
   
    Student s1("Dipro Das" , 3.80) ;

    s1.getInfo() ;

    return 0;
}