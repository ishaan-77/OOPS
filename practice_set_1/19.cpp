/*Write a program to calculate the simple interest. Formula: SI = P×R×T /100

*/

#include <iostream>
using namespace std;

int main(){

    float p;
    float r;
    float t;

    cout<<"enter principal amount:";
    cin>>p;

    cout<<"enter interest  amount:";
    cin>>r;

    cout<<"enter time :";
    cin>>t;

    float SI = (p*r*t) / 100;

    cout<<"the simple interet is :rupees"<<SI;


    return 0;
}