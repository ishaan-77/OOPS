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