/* EXTRA Q

Write a program to find the least common multiple (LCM) of two num-
bers using a loop.
*/


// logic : keep dividing both numbers with i util some i divides both 
// loop : should run unitl the smaller of the two numbers and starts from 1 cause cant divide with 0
#include <iostream>
using namespace std;

int main(){


    int a,b;
    int lcm=0;


    cout<<"enter a and b:";
    cin>> a >> b;

    lcm = max(a,b);

    while(true){
        
        if(lcm % a ==0 && lcm % b ==0){
            cout<<"the lcm is :"<<lcm<<endl;
            break;
        }
        lcm++;
    }

    
    
    

    return 0;
}