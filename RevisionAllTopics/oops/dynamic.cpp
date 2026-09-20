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
int main(){
       Cricketer c1("Virat",25000,55.2);
       Cricketer* c2=new Cricketer("Rohit",18000,47.5);   // c2 ke pass address stored hai iska koi naam nehi hai jesa viral wla ke naam hai c1; 

       cout<<(*c2).name<<endl;
}


