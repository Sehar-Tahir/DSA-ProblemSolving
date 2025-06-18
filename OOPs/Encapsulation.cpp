//TODO: Encapsulation - Data hiding

#include <iostream>
using namespace std;

//class
class Student{

    // Encapsulation:-
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this -> age;
    }

};

int main(){
//obj
Student one;

}

//.....................................................

//TODO: Abstraction - Implementation hiding
//* Just show essential details not complete details
//* like show email not how it reached through internet