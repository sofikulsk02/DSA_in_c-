#include<bits/stdc++.h>
using namespace std;

class Footballer{
    public:
      string name;
      int goals;
      Footballer(string name,int goals){
        this->name=name;
        this->goals=goals;
      }
    //   void print(){
    //     cout<<name<<endl<<goals<<endl;
    //   }

    //ye this use isliye kiya hai kalko same naam se print mei parameter aasakte hai
    //so make sure kya print karana hai
      void print(){
        cout<<this->name<<endl<<this->goals<<endl;
      }
};

int main(){
      Footballer f1("Ronaldo",1000);
      Footballer f2("Neymar",800);
      f1.print();
}




// ^ hum functions bhi baana sakte hai and usko access bhi karsakte hai