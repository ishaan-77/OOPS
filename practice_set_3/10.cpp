/*

Define a class University with private members name and ranking.
Provide setters and getters. Demonstrate in main() that private data
members cannot be accessed directly, but only via the methods.

*/

#include <iostream>
using namespace std;


// create the class:

class university{

    private:
    string name;
    int ranking;

    public:

    void set_name(string n){
        
        name = n;
        
    }

    void set_rank(int r){
        
        if(r > 0){
            ranking = r;
        }

        if(r<0){
            cout<<"invalid rank";
        }
    }

    void get_name_rank(){
        cout<<"name is :"<< name <<"\t"<<"rank is :"<< ranking <<endl;
    }



};


int main (){

    university u1;

    // u1.name = "random university";
    // u1.ranking(1000);

    // cout<<"name is :"<< u1.name <<"rank is :"<< u1.ranking << ;


    // CORRECT WAY TO ACESS PRIVATE MEMBERS USING THE METHODS and set values:

    u1.set_name("harvard");
    u1.set_rank(1);

    u1.get_name_rank();



    return 0;
}
