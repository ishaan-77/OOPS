/*

Implement a class Circle with a private data member radius. Provide
setters and getters, and an additional method getArea() that uses the
getter to calculate the area.

*/

#include <iostream>
using namespace std;


// create the class:

class circle{

    private:
    float radius;

    public:

    void set_radius(float r){
        
        radius = r;
        
    }

    void get_radius(){
        cout<<"the radius is :"<<radius<<endl;
    }

    void get_area(){
        cout<<"area is:"<< 3.14 * radius * radius <<endl;
    }



};


int main (){

    circle c1;
    circle c2;

    c1.set_radius(100);
    c2.set_radius(10);  // doubt when setting r=1000 getting garbge val as answer why??

    c1.get_area();
    c2.get_area();


    return 0;
}
