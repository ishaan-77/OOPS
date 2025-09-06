

/*why do we use namespace std :: 

all header files are mot gobal in cpp like in c soo to avoid using the wrong header file */

/* what is a object file ?
ans : bascially source code gets parsed and all unnecessary stuff like comment etc gets 
filtered out adn then the gaps and all the inbuild functions are read using a linker.

*/

// SOLVE QUDRATIC EQUATON: USE C.MATH

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a;
    float b;
    float c;

    float root1;
    float root2;


    cout<<"enter first number:";
    cin>>a;

    cout<<"enter second number:";
    cin>>b;

    cout<<"enter third number:";
    cin>>c;

    int d;

    d = pow(b,2)-(4*a*c);

    if (d>0){

        root1 = -b + sqrt(d) / (2*a);
        root2 = -b - sqrt(d) / (2*a);

        cout<<"the roots are real and distinct";
        cout<<"root 1 is :"<<root1;
        cout<<"root 2 is :"<<root2;
        

    
    }


    else if (d==0){
        root1 = -b + sqrt(d) / (2*a);
        cout<<"the roots are real and equal and are :"<<root1;
    }

    //imaginary roots :
     else if (d<0){

        int dis1 = -d;
        cout<<"the roots are imaginary and the real part is :"<< (-b/(2*a))<<"+-"<<sqrt(dis1)/2*a<<"i";

    }

    return 0;

}