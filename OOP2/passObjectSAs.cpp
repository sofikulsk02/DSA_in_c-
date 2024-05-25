#include<iostream>
using namespace std;\
class Player{
    private:
    int health;
    int age;
    int score;
    bool isAlive;
    Gun gun;
    public:
    void setHealth(int health){
        this->health=health;
    }
    void setAge(int age){
        this->age=age;
    }
    void setisAlive(bool isAlive){
        this->isAlive=isAlive;
    }
    void setScore(int score){
        this->score=score;
    }
    void setGun(Gun gun){
        this->gun=gun;
    }
    Gun getGun(){
        return gun;
    }
    int getAge(){
        return age;
    }
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
    bool getisAlive(){
        return isAlive;
    }
};
class Gun{
    private:
    int ammo;
    int damage;
    int scope;
    public:
    void setAmmo(int ammo){
        this->ammo=ammo;
    }
    void setDamage(int damage){
        this->damage=damage;
    }
    void setScope(int scope){
        this->scope=scope;
    }
    int getAmmo(){
        return ammo;
    }
    int getDamage(){
        return damage;
    }
    int getScope(){
        return scope;
    }

};
int addScore(Player a, Player b){
    return a.getScore()+b.getScore();
}
Player getMaxScore(Player a, Player b){
    if(a.getScore()>b.getScore()){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    Player Rajib;
    Player Ajim;
    Player *Naaz=new Player;
    Gun akm;
    akm.setAmmo(100);
    akm.setDamage(80);
    akm.setScope(2);
    Gun awm;
    awm.setAmmo(50);
    awm.setDamage(150);
    awm.setScope(8);
    
    Rajib.setAge(20);
    Rajib.setHealth(100);
    Rajib.setisAlive(1);
    Rajib.setScore(90);
    Rajib.setGun(akm);

    Ajim.setAge(21);
    Ajim.setHealth(100);
    Ajim.setisAlive(1);
    Ajim.setScore(80);
    
    Naaz->setAge(20);
    Naaz->setHealth(100);
    Naaz->setisAlive(1);
    Naaz->setScore(100);
    cout<<addScore(Rajib,Ajim)<<endl;
    Player soma=getMaxScore(Rajib,Ajim);
    cout<<soma.getScore()<<endl;
    cout<<"the score of naaz is "<<Naaz->getScore();
}