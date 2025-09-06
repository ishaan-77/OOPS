/*

Write a class Car with private members brand and model. Provide
setter and getter methods. In main(), create an array of cars and use
the methods to assign and print their values.
*/

#include <iostream>
using namespace std;


// create the class:

class cars{

    private:
    string brand;
    int model_no;

    public:

    void set_brand_model(string b,int m){
        
        brand = b;
        model_no = m;
        
    }

    void get_brand_model(){
        cout<<"brand :"<<brand<<"\t"<<"model:"<<model_no<<endl;
    }



};


int main (){

    // creating array of cars
    int n;

    cout<<"enter the number of cars:";
    cin>>n;

    cars car[n];

    for (int i=0;i<n;i++){

        string brand;
        int model;

        cout<<"enter the brand for car "<< i+1<<":";
        cin>>brand;

        cout<<"enter the model for car :"<< i+1<<":";
        cin>>model;

        
        // set using set_brand_model;
        car[i].set_brand_model(brand,model);

    }

    // get the info for all cars using for loop

    for (int i =0;i<n;i++){
        
        car[i].get_brand_model();
        

    }

    return 0;
}
