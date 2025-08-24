#include<iostream>
using namespace std;
class Player{
    private :
    int health;
    int age;
    int score;
    bool alive;
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

};
//paasing class object to function
int addScore(Player a,Player b){
    return a.getscore() + b.getscore();
}

// returning class
Player getMaxscorePlayer(Player a,Player b){
    if (a.getscore() > b.getscore())
    {
        return a;
    }else
    {
        return b;
    }
    
    
}

int main()
{
    Player prakash;
    Player mohit;

    prakash.sethealth(100);
    prakash.setage(20);
    prakash.setscore(100);
    prakash.setIsAlive(true);

    mohit.sethealth(10);
    mohit.setage(20);
    mohit.setscore(10);
    mohit.setIsAlive(true);

    cout<<addScore(prakash,mohit);
    cout<<endl;
    getMaxscorePlayer(prakash,mohit);
   // cout<< getMaxscorePlayer(prakash,mohit); , it will give error becoz we cannot cout class object. why?

   //here we made a object winner to store class object as it is returnig a player.

   Player winner;
   winner = getMaxscorePlayer(prakash, mohit);
   cout<<winner.getscore()<<endl;
   cout<<winner.gethealth();// this will give score of prakash why1?
return 0;
}

//ans to why1 : becoz object winner is storing player returntype of object prakash which is winner in this case.