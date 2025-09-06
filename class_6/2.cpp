// what is a copy constructor ?

#include <iostream>
using namespace std;


    class complex{


        float x;
        float y;

        public:

        static int count;

        complex(float a , float b){

            this->x = a;
            this-> y= b;
            count++;
        }

        void getdetails(){
            cout<<"x:"<< this->x<< "y:"<< this->y<<endl;
            cout<<"the count is :"<< count <<"complex number is :";
            
        }
        
        friend void sumcomplex(complex a1,complex a2){

            float sumx = a1.x + a2.y;
            float sumy = a1.y + a2.y;
            cout<<"the sum is :"<<"a:"<< sumx <<"b:"<<sumy<<"i";
            

        }

        
    };

    int complex :: count = 0;

    friend void sumcomplex(complex a1,complex a2);


int main (){

    complex c1(2,3),c2(4,5);

    sumcomplex(c1,c2);
    



    return 0;

}