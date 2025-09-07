// Check whether a given year is a leap year or not. 

#include <iostream>
using namespace std;

int main(){

    int year;

    cout<<"enter year:";
    cin>>year;

    if(year % 4==0){
        cout<<"yes leap yr";
    }
    else{
        cout<<"not a leap yr";
    }


    return 0;

}