#include<iostream>
using namespace std;
class vehicle{
    public:
    int tyreSize;
    int power;
    bool status;//running or not
    vehicle(){
         this->tyreSize=tyreSize;
         this->power=power;
         this->status=status;
    }
};
class Bike: vehicle{
     bool handle;
     int milege;
     Bike(){
        this->handle=handle;
        this->milege=milege;
     }
};
int main(){

}