/*write a function to check if the person is eligible to do the given tast*/
#include<iostream>
using namespace std;

bool checkEligible(int age, int limit){
    if(age >= limit){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cout<<"enter the age"<<endl;
    cin>>n;
    int voting_limit = 18;
    int is_eligible_for_voting = checkEligible(n,voting_limit);
    if(is_eligible_for_voting){
        cout<<"yes, the current person is eligible to vote";
    }else
    {
        cout<<"no, the current person is not eligible to vote";
    }
    return 0;

}



