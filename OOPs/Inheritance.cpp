//TODO: Inheritance - Inherit from Parent to Child class

#include <iostream>
using namespace std;

// parent class
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this -> age;
    }
    void setWeight(int w){
         this -> weight = w;
    }
};

    // Inheritance

//child class
class Male: public Human{
    public:
    string color;

    void sleep(){
    cout<< "Male Sleeping"<<endl;
    }
 
};

int main(){
//obj
Male obj;
cout<<"Age is: "<<obj.age<<endl;
obj.setWeight(20);
cout<<"Weight is: "<<obj.weight<<endl;
cout<<"Height is: "<<obj.height<<endl;
cout<<"Color is: "<<obj.color<<endl;
obj.sleep();
}

// Parent - Inherit = Child

// Public - public = public
// Public - private = private
// Public - protected = protected

// Private - public = Not
// Private - private = Not
// Private - protected = Not

// Protected - public = protected
// Protected - private = public
// Protected - protected = protected


//* private data member cannot be accessible in any class


//TODO: Inheritance Types

//1- Single ----------- A->B
//2- Multi level ------ A->B->C
//3- Multiple --------- A->C , B->C
//4- hirerchial ------- A->B , A-C , B->D , B->E , C->F , C->G
//5- Hybrid - combination of any two above types

