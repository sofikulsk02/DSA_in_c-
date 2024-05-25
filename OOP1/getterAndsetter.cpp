#include<iostream>
using namespace std;
int main(){
    class Game{
        private:
        int health;
        int score;
        public:
        void setScore(int s){
           score=s;
        }
        void setHealth(int h){
            health=h;
        }
        int getScore(){
            cout<<"socre is being setted"<<endl;
            return score;
        }
        int getHealth(){
            cout<<"health is being seted"<<endl;
            return health;
        }
    };

    //i have to initialize the class by making it an object

   Game pubg;
   pubg.setScore(10);
   pubg.setHealth(100);
  cout<< pubg.getScore()<<endl;
  cout<< pubg.getHealth();
}