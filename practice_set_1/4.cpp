#include <iostream>
using namespace std;

int main(){

    int a;
    int b;
    int c;

    cout<<"enter first number:";
    cin>>a;

    cout<<"enter second number:";
    cin>>b;

    cout<<"enter third number:";
    cin>>c;

    if (a>b>c){
        cout<< a <<" is larger";
    }

    else if(b>a>c){
        cout<< b <<" is larger";
    }

    else if (c>a>b){
        cout<< c <<" is larger";
    }
    
    
    return 0;
}