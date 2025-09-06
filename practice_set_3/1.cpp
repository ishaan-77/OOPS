/*

Create a class Student with private data members name and age. Write
setter and getter methods to assign and retrieve their values. Demon-
strate their use in main().

*/

#include <iostream>
using namespace std;



class student{
    private:
    string name;
    int age;

    public:

    void setage(int a){
        age = a;
    }

    void setname(string n){
        name = n;

    }

    int getage(){
        return age;
    }

    string getname(){
        return name;
    }
};


int main(){

    //create a object belonging to student class:

    student s1;

    s1.setage(19);
    s1.setname("randomname");

    cout<<"name is :"<<s1.getname();
    cout<<"age is :"<<s1.getage();


    return 0;
}