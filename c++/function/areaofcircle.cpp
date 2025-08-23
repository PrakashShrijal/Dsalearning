#include<bits/stdc++.h>
using namespace std;
double areaOfCircle(float r){
    float pi = 3.17;
    return pi*r*r;

}
int main(){
    float r;
    cout<<"enter the radius :";
    cin>>r;
    cout<<areaOfCircle(r);
}