/*

Write a class Temperature with a private member celsius. Provide
setCelsius() and getFahrenheit() methods to convert the stored
temperature to Fahrenheit.

*/

#include <iostream>
using namespace std;


// create the class:

class temp{

    private:
    float celsius;

    public:

    void set_celius(float n){
        
        celsius = n;
        
    }


    void get_farenheit(){
        cout<<"the temp in celsius is :"<< celsius <<endl;
        cout<<"converted temp in farenheit is :"<< (celsius * (9.0/5.0)) + 32 <<endl;
        // write it as 9.0 / 5.0 because it wont automatically
        // take it as a float and will lose the number after decimal point
    }



};


int main (){

    temp t1;
    temp t2;

    t1.set_celius(25);
    t2.set_celius(10);

    t1.get_farenheit();
    t2.get_farenheit();
    

    return 0;
}
