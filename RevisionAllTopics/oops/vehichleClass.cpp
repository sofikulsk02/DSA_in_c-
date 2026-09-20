#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
        int topSpeed;
        float millage;
        string fuel;
};

class TwoWheeler: public Vehicle{
            public:
                  
}

class Car :public Vehicle{
      public:
      bool sunroof;
};

class Bike:public TwoWheeler{

};


class Scooty: public TwoWheeler{

};
class Truck:public Vehicle{

};

int main(){
   Bike b1;
   b1.topSpeed=120;
   b1.millage=12.5;
   b1.gears=6;
}