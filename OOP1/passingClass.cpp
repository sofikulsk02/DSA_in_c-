#include<iostream>
using namespace std;
int main(){
    class Player{
        private:
        int score;
        bool isAlive;
        int health;
        public:
        void setScore(int s){
            score=s;
        }
        void setIsAlive(bool alive){
            isAlive=alive;
        }
        void setHealth(int h){
            health=h;
        }
        int getScore(){
            return score;
        }
        int getHealth(){
            return health;
        }
        int getIsAlive(){
            return isAlive;
        }

        Player getMaxScore(Player a, Player b){
        if(a.getScore()>b.getScore())
        return a;
        else{
            return b;
        }
        
    }
    };

   
    Player Rajib;  
    Player Ajim;  

    Player *urvi= new Player; 
    Player urviObject=*urvi;
    Rajib.setScore(90);
    Rajib.setHealth(80);
    Rajib.setIsAlive(true);
    Ajim.setScore(90);
    Ajim.setHealth(80);
    Ajim.setIsAlive(true);
    urviObject.setHealth(40);
    urviObject.setScore(100);
    //*urvi.setScore(30);
    //urvi->setHealth(100);
    
}