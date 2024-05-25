#include<iostream>
using namespace std;
int main(){
    class Player{
        private:
        int age;
        int score;
        int health;
        bool isAlive;
        public:
        void setAge(int a){
            age=a;
        }
        void setHealth(int h){
            health=h;
        }
        void setIsAlive(int ali){
            isAlive=ali;
        }
        void setScore(int s){
            score=s;
        }
        int getScore(){
            return score;
        }
        int getAge(){
            return age;
        }
        int getHealth(){
            return health;
        }
        bool getIsAlive(){
            return isAlive;
        }
    };

     Player Rajib;
     Player *urvi;

     urvi->setAge(20);
     urvi->setHealth(90);
     urvi->setIsAlive(true);
     urvi->setScore(100);

     cout<<urvi->getAge()<<endl<<urvi->getHealth()<<endl<<urvi->getIsAlive()<<endl<<urvi->getScore();

}