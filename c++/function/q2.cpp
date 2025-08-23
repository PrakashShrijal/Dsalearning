/*Give radius of circle.write a functionto print the area and circumference of the circle*/



#include<iostream>
using namespace std;

double circumf(int r){
    return 2*3.14*r;
}
double area(int r){
    return 3.14*r*r;
}
int main(){
    int r;
    cout<<"Enter the radius"<<endl;
    cin>>r;
    cout<<"area:"<<area(r)<<" "<<circumf(r)<<"\n";
    return 0;


}