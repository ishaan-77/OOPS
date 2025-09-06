/* Given marks of a student (0–100), print the grade: A (≥90), B (80–89),
C (70–79), D (60–69), F (below 60). */

#include <iostream>
using namespace std;

int main(){

    int mark;

    cout<<"enter mark:";
    cin>>mark;

    if(mark>=90){
        cout<<"A";
    }

    else if(mark>=80 && mark<=89){
        cout<<"B";
    }
    else if(mark>=70 && mark<=79){
        cout<<"c";
    }
    else if(mark>=60 && mark<=69){
        cout<<"D";
    }
    else if(mark<=60){
        cout<<"F";
    }
    return 0;
}