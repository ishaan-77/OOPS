/*

3. Write a program that defines a class Book with private members title
and price. Implement setters and getters for both members, and print
the details of the book object.

*/

#include <iostream>
using namespace std;


// create the class:

class book{

    private:
    string title;
    float price;

    public:

    void setprice(float n){
        price = n;
    }

    void set_title(string str){
        title = str;
    }


    void getprice_title(){

        cout<<"the title is :"<< title<<"\t"<< "the price is:"<< price <<endl;
    }


};


int main (){

    book b1;
    book b2;

    b1.setprice(500.0);
    b1.set_title("book1");

    b2.setprice(800.0);
    b2.set_title("book2");

    b1.getprice_title();
    b2.getprice_title();


    return 0;
}
