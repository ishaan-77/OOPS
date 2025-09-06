// CREATE A WITHDRAW FUNCTION :

#include <iostream>
using namespace std;

class xy_coordinate{
    private:
        float x;
        float y;

    public:
        void set_value(float a1 , float a2); //declare the function inside but define it outside the class
        void get_value(void);

        /*constructor : a constructor is a special */

        // default constructor:
        // xy_coordinate(){
        //     cout<<"hellow world"<<endl;
        //     this->x=67;
        //     this->y=78;
        // }

        xy_coordinate(float n3){
            this->x = n3;
            this->y = 0;

        }
        
  

};

//definition of the function:

// return_type name_of_class :: function(parameters)

void xy_coordinate::set_value(float a1 , float a2) {
    this->x = a1;
    this->y = a2;

}

void xy_coordinate::get_value(){
    cout<<"x:"<<this ->x<<endl<<"y:"<<this->y<<endl;
}

int main (){

    xy_coordinate s1(3.4),s2(5.6);
    // s1.set_value(1,2);
    // s2.set_value(5,6);
    s1.get_value();
    s2.get_value();


    return 0;

};