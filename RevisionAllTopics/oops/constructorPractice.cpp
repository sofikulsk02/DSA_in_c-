#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    string  name;
    string model;
    float price;
    Car(){}                           //this is default constructor and it should be there if you wnat to control old mathod of creating object
    Car(string n, string m, float p){
          name=n;
          model=m;
          price=p;
    }
    Car(string n , string m){
            name=n;
            model=m;
    }
};
int main(){
     Car c1;
     c1.name="hundai";
     c1.model="Verna-12A";
     c1.price=12.6;

    //  cout<<c1.name<< endl<< c1.model <<endl  << c1.price;

    Car c2("BMW","High",88.8);
    cout<<c2.name<<endl<<c2.name<<endl<<c2.price<<endl;

    Car c3("Porche","High");
    c3.price=69.8;

    cout<<c3.name<< endl<< c3.model <<endl << c3.price;

}

// we can create constructor by using any number of argumenets it not like
// if we mention 3 fileds in class then those 3 has to present in the constructor 
// so any number of parameterized constructor would work
// we can overwride the value of fields just like another variable 
//we can multiple number of parameterized constructor
// if we initialize an object normalyy (eg: Car c1) and did not assign any valure then if we just print the value we will get some garbage value
// agar 3 parameter pass kiya then 3 parameter wala constructor hona chahiye nehi toh error aayega
// we can also change the order of parameter like ek mei pehle int ,string dusre mei pehle string then int kar sakte hai

// * Copy constructor : agar mei ek constructor banau and usko pehle kisise assign karu then woh copy ho jayega like Car c4=c1; the we get elements or copy of c1  ; but problem hai deep copy ka woh woh c4 change nehi karega c1 mai
// * Car c4(c1)  --> isko hum bolte hai copy constructor ye bhi deep copy hai  