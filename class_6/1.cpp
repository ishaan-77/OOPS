// what is a copy constructor ?

#include <iostream>
using namespace std;


class state_bank{
        private:
        string name;
        int account_num;
        float bal;

        public:

        // DECALRING A STATIC VARIABLE:

        static float total_balance;   

        state_bank(string name,int a,float b){
            this->name = name;
            this->account_num = a;
            this->bal = b;
            this->total_balance = this->total_balance + b;
        }

        void getdetails(){
            cout<<"name:"<<this->name<<" account number:"<<this->account_num<<" balance:"<<this->bal<<endl;
            cout<<"total balance of bank is :"<<total_balance<<endl;
        }



    };

    float state_bank :: total_balance = 0;

int main (){

    state_bank a1("ishaan", 45 , 50000);

    a1.getdetails();

    state_bank a2("achu", 11 , 60000);
    
    // new syntax :
    cout<<"total balance :"<< state_bank :: total_balance<<endl;

    


    return 0;

}