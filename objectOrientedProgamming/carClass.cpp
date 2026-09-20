#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        string make;
        string model;
        int year;

    public:
        Car(string m, string mo, int y){
            make = m;
            model = mo;
            year = y;
        }

        void displayInfo(){
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }   
};

class SuperCar:public Car{
    private:
        int topSpeed;

    public:
        SuperCar(string m, string mo, int y, int ts):Car(m, mo, y){
            topSpeed = ts;
        }

        void displaySuperCarInfo(){
            displayInfo();
            cout << "Top Speed: " << topSpeed << " km/h" << endl;
        }   
};

int main(){
    Car myCar("Toyota", "Camry", 2020);
    myCar.displayInfo();
    SuperCar mySuperCar("Ferrari", "F40", 1987, 320);
    mySuperCar.displaySuperCarInfo();
    return 0;
}