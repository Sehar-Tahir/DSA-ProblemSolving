#include <iostream>
using namespace std;

//class - template

class Hero {
    //private & public properties
    private:
    int num;

    public:
    int health;
    char level;

    //static keyword
    static int timeToComplete;

    //static function
    static int random(){
        return timeToComplete;
    }

    //getter setter func
    int getnum(){
        return num;
    }
    void setnum(int n){
        num = n;
    }

    //constructor
    Hero(){
        cout<< "Hello From Constructor" <<endl;
    }
    //desstructor
    ~Hero(){
        cout<< "Destructor Called" <<endl;
    }

    //parametrized constructor
    Hero(int num){
        cout << "this: " <<this <<endl;
        this -> num = num;
    }

    // copy constructor
    Hero(Hero& newnum){
        this->num = newnum.num;
    }

};
//initialize static member
int Hero::timeToComplete = 5;

 int main(){
// // object - instance of class - obj 1
// Hero Rohit;
// Rohit.health = 70;
// Rohit.level = 'A';
//   cout <<"Health: " << Rohit.health<<endl;
//   cout <<"Level: " <<Rohit.level<<endl;
//   cout <<"Befor Num: " <<Rohit.getnum()<<endl;
//   Rohit.setnum(22);
//   cout <<"After Num: "<<Rohit.getnum()<<endl;
//   cout<< endl<< endl;


//   //Static allloation - obj 2
//  Hero a;
//   cout <<"Health: " <<a.health<<endl;
//   cout <<"Level: " <<a.level<<endl;
//   cout <<"Befor Num: " <<a.getnum()<<endl;
//   a.setnum(23);
//   cout <<"After Num: "<<a.getnum()<<endl;
//   cout<< endl<< endl;

//   //Dynamic allocaton - obj 3
//   Hero *b = new Hero;
// //1st way 
//   cout <<"Health: " <<(*b).health<<endl;
//   cout <<"Level: " <<(*b).level<<endl;
//   cout <<"Befor Num: " <<(*b).getnum()<<endl;
//   (*b).setnum(24);
//   cout <<"After Num: "<<(*b).getnum()<<endl;
//   cout<< endl<< endl;
// //2nd way
//   cout <<"Health: " <<b->health<<endl;
//   cout <<"Level: " <<b->level<<endl;
//   cout <<"Befor Num: " <<b->getnum()<<endl;
//   b->setnum(25);
//   cout <<"After Num: "<<b->getnum()<<endl;
//   cout<< endl<< endl;


// // parametrized constructor - obj 4
// Hero z(80);
// cout<< "Address of z: "<<&z <<endl;
// z.getnum();


// // Default Copy Constructor (Shallow Copy) - obj 5,6 
// Hero x;
// x.setnum(15);
// cout<<"Xnum:" <<x.getnum()<<endl;

// Hero y(x);
// cout<<"Ynum:" <<y.getnum()<<endl;


// //  Custom Copy Constructor (Deep Copy)  - obj 7,8 
// Hero m;
// m.setnum(16);
// cout<<"Mnum:" <<m.getnum()<<endl;

// Hero n(m);
// cout<<"Nnum:" <<n.getnum()<<endl;

// // Constructor & Destructor Call - obj 9,10
// //static
// Hero w;
// //dynamic
// Hero *q = new Hero;
// delete q; //manually call

// // Access static member - no need to create obj bcz it belongs to class
// cout<<"Time to Complete: "<<Hero::timeToComplete <<endl;

// //Static func - only access static members
// cout<<"Static Random Func: "<<Hero::random() <<endl;
}