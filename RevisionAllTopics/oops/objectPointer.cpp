#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string name,int runs,float avg){
            this->name=name;
            this->runs=runs;
            this->avg=avg;
    }

};
//! address hamesha pointer mei recive hote hai
void change(Cricketer c){
          c.name="siraj";    // pass by value  and with & c it will be pass by reference
};

void change(Cricketer * c){
    // (*c).avg=32.7;  
    c->avg=32.8;     //arrow ka meaning hi hai (*c);  arrow ka matlab , c mein jo address pada hai usko thik karo
}
int main(){
       Cricketer c1("Virat",25000,55.2);
       Cricketer c2("Rohit",18000,47.5);

           cout<<c1.avg<<endl;
           change(c1);
           cout<<c1.avg<<endl;

    //    Cricketer * p1= &c1;
    //    cout<<(*p1).runs<<endl;

    //    (*p1).avg=77.8;
}