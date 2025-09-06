//Find the sum of digits of a given number. (Example: input 1234 → output 10)


#include <iostream>
using namespace std;

int main (){

    int number;
    int answer;

    cout<<"enter the number:";
    cin>>number;

    int sum = 0;

    while (number !=0){
        int digit = number % 10;
        sum += digit;
        number = number / 10;  // adding from the back and removing the last digit after adding 
    }

    cout<<"the sum is :"<<sum<<endl;
    

    return 0;

}