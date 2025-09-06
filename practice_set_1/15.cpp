// reverse the digits of a given number 

#include <iostream>
using namespace std;

int main(){

    // first declare the number of digits in the number then make the array for storing that number
    // dont write number[n] without getting n first
    int n;
   
    
    cout<<"enter the number of digits in the number:";
    cin>>n;

    int number[n];

    cout<<"enter a number to be reversed digit by digit :";


    for(int i=0;i<n;i++){

        cin>>number[i];
    }
    /*
    to start from the last index for loop cond :  for (int i = n-1 ; i>=0 ; i++)
    ZEROOO BASED INDEXINGGG !!
    */ 

    for (int i=n-1;i>=0;i--){

        cout<<number[i];
    }
    

    return 0;
}

/*
logic : modulus the number by 10 to get the ONLY last digit of the number 
        then remove that digit by dividing wiht 10

#include <iostream>
using namespace std;

int main(){

    int number;
    int digit;


    cout<<"enter the number :";
    cin>>number;

    
    while(number>0){

        digit = number % 10;
        cout<<digit;
        number = number / 10;

    }


    return 0;
}
*/