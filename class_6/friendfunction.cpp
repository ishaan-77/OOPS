#include <iostream>
using namespace std;

//class :

class temple_run{

    private:
    int score;

    public:
    void left(void);
    void right(void);

    void get_score(){
        
    }
    
    //constructor:

    temple_run(){
        this->score = 0;
        cout<<"game started "<<"\t"<<"score :"<< score <<endl;

    }

    // friend function :

    friend void bonus(temple_run *p);



};


void temple_run :: left(void){
    
    this->score ++;
}

void temple_run :: right(void){
    
    this->score ++;
}

void temple_run :: get_score(void){

    cout<<"the score is :"<<score<<endl;
    
}


void bonus(class temple_run *p){
    // call by value use dot :

    // p.score = p.score + 5;

    //call by reference use arrow :

    p->score = p->score + 5;

}


int main(){

    temple_run p1;
    p1.left();
    p1.right();
    p1.get_score();
    // this si call by valueand the friend function get only a copy of the obejct 
    // bonus(p1);

    // for call by reference using &
    bonus(&p1);

    p1.get_score();




    return 0;
}