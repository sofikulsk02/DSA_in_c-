#include<iostream>
using namespace std;
class Player{
    private:
    string name;
    int health;
    int score;
    public:
    void setName(string name){
        this->name=name;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setScore(int score){
        this->score=score;
    }
    string getName(){
        return name;
    }
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
};
int main(){
    Player rajib;
    Player *urvi;
    urvi->setName("Rajib sk");
    urvi->setHealth(100);
    urvi->setScore(100);
    cout<<urvi->getHealth()<<" "<<urvi->getName()<<" "<<urvi->getScore();
}