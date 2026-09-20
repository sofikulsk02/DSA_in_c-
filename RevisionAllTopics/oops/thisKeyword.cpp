#include<bits/stdc++.h>
using namespace std;

class Footballer{
    public:
      string name;
      int goals;
    //   Footballer(string n,int g){
    //         name=n;
    //         goals=g;
    //   }
      Footballer(string name,int goals){
        this->name=name;
        this->goals=goals;
      }
};

int main(){
      Footballer f1("Ronaldo",1000);
      Footballer f1("Neymar",800);

      cout<<f1.name<<endl<<f1.goals<<endl;
}

