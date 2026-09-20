#include<bits/stdc++.h>
using namespace std;

enum FruitColor{
    RED,
    GREEn,
    BROWN,
    BLACK,
    MIX
};

class Car{
    public:
     string name;
     float price;
     string model;
     Car(){};                                   // default constructor
     Car(string s,float p,string m){            //parameterized constructor
             name=s;
             price=p;
             model=m;
     }
};

class Fruit{
    public:
    string name;
    bool countableSeeds;
    float  price;
    FruitColor FruitColor;
    Fruit(string n,bool c,float p,enum FruitColor fruitColor){
        name=n;
        countableSeeds=c;
        price=p;
        FruitColor=fruitColor;
    }
};
int main(){
       Car c1;
       c1.name="BMW";
       c1.price=50.8;
       c1.model="Base Model";
       cout<<c1.model<<endl;
       Car c2("Mercidese",45.5,"High model");
       cout<<c2.name<<"ans"<<endl;

       Fruit f1("Apple",true,100.0,FruitColor::RED);

       cout<<f1.name<<" "<<f1.FruitColor<<endl;
}