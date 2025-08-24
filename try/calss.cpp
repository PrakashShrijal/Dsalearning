#include<iostream>
using namespace std;
class palyer{
    public:
    int health;
    int score;
};
int main()
{
    palyer prakash;
    prakash.score = 94;
    prakash.health = 100;
    cout<<prakash.score<<endl;
    cout<<prakash.health<<endl;

    palyer nitin;
    nitin.score = 56;
    nitin.health = 78;
      cout<<nitin.score<<endl;
    cout<<nitin.health;
return 0;
}