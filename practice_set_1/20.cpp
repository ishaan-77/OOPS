/*

Write a program to find the greatest common divisor (GCD) of two num-
bers using a loop.

*/


// logic : keep dividing both numbers with i util some i divides both 
// loop : should run unitl <= the smaller of the two numbers and starts from 1 cause cant divide with 0
// dont put break indide the for loop as a higher divisor has to replace the current highest.

#include <iostream>
using namespace std;

int main(){


    int a,b;
    int gcd=0;


    cout<<"enter a and b:";
    cin>> a >> b;

    int minimum = min(a,b);

    for (int i=1; i <= minimum; i++){

        if(a%i==0 && b%i==0){
            gcd=i;
            
        }

    }

    cout<<"gcd is:"<<gcd;
    
    

    return 0;
}