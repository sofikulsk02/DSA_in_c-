#include<iostream>
using namespace std;
class Player{
    private:
    string name;
    int score;
    int health;
    public:
    void setName(string name){
        this->name=name;
    }
    void setScore(int score){
        this->score=score;
    }
    void setHealth(int health){
        this->health=health;
    }
    string getName(){
        return name;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }

};
int main(){
      Player Rajib;
      Player *urvi;
      
}