//TODO: Polymorphism - Exsist in many forms

#include <iostream>
using namespace std;

// Polymorphism:

//class 1
class Poly{

    //1- compile time polymorphism/static polymorphism:-
    //a, func overloading - change input parameters:
    public:
    void sayHello(){
       cout<<"Hello Sehar Tahir"<<endl;
    }
    void sayHello(string name){
       cout<<"Hello "<< name<<endl;
    }
    void sayHello(string name, int age){
       cout<<"Hello "<< name<<endl;
    }
    //b, operator overloading - customize the func of any operator [+ = -] etc:
   // ................(code)
};

//class 2
class Parent{
    public:
    void speak(){
        cout<<"Hello From Parent"<<endl;
    }
};
//class 
class Child: public Parent{
    public:
    void speak(){
        cout<<"Hello From Child"<<endl;
    }
};


int main(){
//obj 1 of class 1
Poly A;
A.sayHello();

//obj 2 of class 3
Child B;
B.speak();
}