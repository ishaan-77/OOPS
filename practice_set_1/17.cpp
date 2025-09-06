//Generate the Fibonacci series up to n terms.

#include <iostream>

using namespace std;

int main (){

    int num1 = 0;
    int num2 = 1;
    int n;
    

    cout<<"enter the value n for the number of terms in the series:";
    cin>>n;

    //first print the first 2 terms 

    cout<<num1<<"\t" ;
    cout<<num2<<"\t";
    int temp;

    for(int i=0;i<n;i++){

        int num3 = num1 + num2;
        cout<<num3<<"\t";
        
        //update num1 and num2 
        
       num1 = num2;
       num2 = num3;

        
    }

    

    return 0;
}