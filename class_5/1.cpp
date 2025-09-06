// CREATE A WITHDRAW FUNCTION :

#include <iostream>
using namespace std;

class bank_account{
    private:
    string name;
    float bal;

    public:
    void set_value(string n , float b){
        this->name = n;
        this->bal = b;
        
    }

    void get_values(void){
        cout<<"name:"<< this -> name <<"balance:"<<this ->bal<<endl;

    }

    void deposit(float n1){
        this->bal = this ->bal + n1;
    }

    void wihtdraw_and_show(float n2){
        if(bal >0){
            this ->bal= this->bal - n2;
            cout<<"the balance after withdrawing is :"<<bal<<endl;
        }
        if(bal==0){
            cout<<"insuffiecient funds";
        }
    }

};

int main (){

    bank_account a1;
    bank_account a2;

    a1.set_value("ishaan", 10000.00);
    a2.set_value("achu", 600000.00);
    a1.get_values();
    a2.get_values();

    a1.deposit(5000.00);
    a2.deposit(5000.00);

    a1.get_values();
    a2.get_values();

    a1.wihtdraw_and_show(5000.00);
    a2.wihtdraw_and_show(10000.00);

    return 0;

};