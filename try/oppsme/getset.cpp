#include<iostream>
using namespace std;
class player
{
private:
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
int intlive(){
    return alive;
}
int sethealth(int health){
    //player::health = health;
    this->health = health; 
    
     /* we use (this ->), so that compiler doesn't get confuse
     with which health variable to take  , fisrt value is passed to argument health than 
     it passed to class object.*/
}
int setage(int age){
    this->age = age;
}
int setscore(int score){
    this->score = score;
}
int setalive(int alive){
    this->alive  = alive;
}
void dilapy(player p){
    cout<<"health :"<<" "<<health<<endl;
    cout<<"score :"<<" "<<score<<endl; 
    cout<<"age :"<<" "<<age<<endl;
    cout<<"alive :"<<" "<<alive<<endl;
}

};
int main()
{
    player prakash;//object creation staticlly.
    player nitin;//complie time, static allocation
   
    prakash.sethealth(21);
    prakash.setage(20);
    prakash.setscore(2100);
    prakash.setalive(true);

    nitin.sethealth(23);
    nitin.setage(21);
    nitin.setscore(100);
    nitin.setalive(false);
   
   
    cout<<prakash.getscore()<<endl;
    cout<<"prakash details"<<endl;
    void display();
     
     
    
return 0;
}