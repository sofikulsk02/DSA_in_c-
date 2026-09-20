#include<bits/stdc++.h>
using namespace std;

class Scooty{
    public:
        int topSpeed;
        float millage;
    private:
        int bootspace;
};

class Bike :public Scooty{
      public:
      int gears;
};

int main(){
   Bike b1;
   b1.topSpeed=120;
   b1.millage=12.5;
   b1.gears=6;
}