/*

Create a class Account with private members accountNumber and
balance. Provide setter and getter methods. In main(), ensure that
account details can only be accessed through these methods.

*/

#include <iostream>
using namespace std;


// create the class:

class account{

    private:
    int acc_no;
    float bal;

    public:

    void set_accNO(int n){
        
        acc_no = n;
        
    }

    void setbal(float b){
        bal = b;
    }

    void get_ACCNO_BAL(){
        cout<<"account number is  :"<< acc_no <<"\t"<<"balance is :"<< bal <<endl;
    }



};


int main (){


    account a1;
    account a2;

    a1.set_accNO(123);
    a2.set_accNO(444);

    a1.setbal(1000);
    a2.setbal(2000);

    a1.get_ACCNO_BAL();
    a2.get_ACCNO_BAL();

    return 0;
}
