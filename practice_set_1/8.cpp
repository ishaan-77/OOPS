// Find the sum of the first n natural numbers.

#include <iostream>
using namespace std;


int main (){

    int sum=0;
    int n;

    cout<<"enter a number n:";
    cin>>n;

    for(int i=0;i<n;i++){
        sum+=i;
    }

    cout<<sum;

    return 0;
}
