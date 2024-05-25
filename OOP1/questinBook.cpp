#include<iostream>
using namespace std;
int main(){
    class Book{
        public:
        string name;
        int price;
        int numberOfpages;
        int countBooks(int p){
            if(p>price) return 1;
            else return 0;
        }
        bool isPresent(string title){
            if(name==title) return true;
            else return false;
        }
    };

    Book HarryPotter;
    HarryPotter.price=1000;
    HarryPotter.numberOfpages=100;
     HarryPotter.name="HarryPotter";
   cout<< HarryPotter.isPresent("HarryPotter")<<endl;
   cout<< HarryPotter.countBooks(900);
    
}