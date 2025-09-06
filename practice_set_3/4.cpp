/*

Create a class Rectangle with private data members length and width.
Write setter and getter methods and calculate the area using them.
*/

#include <iostream>
using namespace std;


// create the class:

class rectangle{

    private:
    float length;
    float breadth;

    public:

    void setlengthandbreadth(float l,float b){
        
        length = l;
        breadth = b;
    }

    void cal_area(){
        cout<<"the area is :"<< length * breadth<<endl;
    }



};


int main (){

    rectangle r1;
    rectangle r2;

    r1.setlengthandbreadth(50,20);
    r2.setlengthandbreadth(10,40);

    r1.cal_area();
    r2.cal_area();
 


    return 0;
}
