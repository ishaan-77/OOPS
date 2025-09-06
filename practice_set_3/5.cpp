/*

Define a class Employee with private members id and salary. Use
setters and getters to initialize and display their values. In main(),
create multiple employees and print their details.

*/

#include <iostream>
using namespace std;


// create the class:

class employee{

    private:
    int id;
    float salary;

    public:

    void set_id_salary(int i,float sal){
        
        id = i;
        salary = sal;
        
    }

    void get_id_salary(){
        cout<<"employee id is : "<< id << "\t" << "salary is : "<< salary <<endl;
    }



};


int main (){

    employee e1;
    employee e2;

    e1.set_id_salary(111,10000);
    e2.set_id_salary(222,40000);

    e1.get_id_salary();
    e2.get_id_salary();

    return 0;
}
