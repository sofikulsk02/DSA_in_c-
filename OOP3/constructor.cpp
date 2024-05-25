#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;
    Bike(int tyreSize,int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
       cout<<"This is a constructor\n";
    }
};
int main(){
      Bike tvs(10,100);
      cout<<tvs.tyreSize<<endl;
      cout<<tvs.engineSize;
}
