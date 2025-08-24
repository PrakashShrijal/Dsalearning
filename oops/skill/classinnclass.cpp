#include<iostream>
using namespace std;
class Gun{  // creating gun as parameter , this class can ba access by others .
    public :
    int ammo;
    int damage;
    int scope;
};
class Player{
    private:
    class Helmet{  // this class cannot be access by other class.
        int hp;
        int level;
        public : 
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
    
    int health;
    int age;
    int score;
    bool alive;
    Gun gun; // Gun is datatype. and gun here is object of player class. think!
    Helmet helmet;



    public:
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }

    Gun getGun(){
        return gun;
    }
    


     void sethealth(int health){
        //Player ::health = health;
        this->health = health;

    }
    void setage(int age){
        this ->age =age;
    }
    void setscore(int score){
        this->score=  score;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }

    void setGun(Gun gun){
        this->gun = gun;
    }


    
    void  setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health;
        if (level == 1)
        {
            health = 25;
        }else if(level == 2){
            health = 50;
        }else if(level == 3){
            health = 75;
        }else if (level ==4){
            health = 100;
        }else{
            cout<<"invalid level Error!";
        }
        helmet->setHp(health);
        this ->helmet = *helmet;
    }

    Helmet getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;

    }

};
int main()
{
     Player prakash;
    Player mohit;
    Player *nitin = new Player;  // run time , dynamic allocation.
    Gun akm;
    akm.ammo =  100;
    akm.damage = 20;
    akm.scope = 2;

    prakash.sethealth(100);
    prakash.setage(20);
    prakash.setscore(100);
    prakash.setIsAlive(true);
    prakash.setGun(akm);
    prakash.setHelmet(2);



    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    mohit.sethealth(10);
    mohit.setage(20);
    mohit.setscore(10);
    mohit.setIsAlive(true);
    mohit.setGun(awm);
    mohit.setHelmet(1);


    Gun gun123 = prakash.getGun();
    cout<<"damage :"<<gun123.damage<<endl;;
    cout<<"ammo is :"<<gun123.ammo<<endl;
    cout<<"Scope :"<<gun123.scope<<endl;


   prakash.getHelmet();
   mohit.getHelmet();


    


    // (*nitin).sethealth(80);  // not good way
    // cout<<(*nitin).gethealth();
    // best way in C++
    // nitin->sethealth(80);
    // cout<<nitin->gethealth();

    
return 0;
}