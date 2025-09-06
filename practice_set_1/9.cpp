// Find the factorial of a given number n.

// Find the sum of the first n natural numbers.

#include <iostream>
using namespace std;


int main (){

    int fact = 1;
    int n;

    cout<<"enter a number to find the factorial:";
    cin>>n;

    while (n>=1)
    {
        fact = fact * n;
        n--;

    }
    cout<<fact;
    
    
    return 0;
}
