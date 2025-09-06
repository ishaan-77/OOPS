/*

Define a class BankAccount with a private member balance. Provide
methods setBalance() and getBalance() to update and view the
balance. Ensure that negative values cannot be assigned.

*/

#include <iostream>
using namespace std;



class bankaccount{

    private:
    float balance;

    public:

    void setbalance(float balance){

        if(balance>0){
            balance = balance;

        }
        else{
            cout<<"enter a proper amount";
        }
    }

    float getbalance(){
        return balance;
    }



};


int main(){

    //create a object belonging to bank class:

    bankaccount b1;
    bankaccount b2;

    b1.setbalance(500.00);
    b2.setbalance(100.00);

    b1.getbalance();
    b2.getbalance();

    


    return 0;
}