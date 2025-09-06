

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

    int a;

    cout<<"enter a number:";
    cin>>a;
    bool isprime=true;

    for (int i=2;i<a/2;i++){

        if(a%i==0){
            isprime=false;
            break;

        }

        
    }
    
    if (isprime==true)
    {
       cout<<"the number is prime";
    }
    

    else if (isprime==false)
    {
        cout<<"the number is not prime";
    }
    

    return 0;

}