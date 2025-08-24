#include<iostream>
#include<math.h>
using namespace std;
double triangleArea(int b, int h){
    //Right angle Triangle
    return (0.5)*b*h;
}
double triangleArea(int a){
    //equilateral Traingle
    return (sqrt(3)/4)*a*a;
}
double triangleArea(int r, int p, int t){ //area of scalene traingle
    double s = (r+p+t)/2.0;
    double area = sqrt(s*(s-r)*(s-p)*(s-t));
    return area;

}
int main()
{
    int j,k,l,m,n,o;
    cout<<"Enter the side of traingle :"<<endl;
    cout<<"for right angle :";
    cin>>j>>k;
    cout<<triangleArea(j,k);
    cout<<endl;

    cout<<"for equilateral angle :";
    cin>>l;
    cout<<triangleArea(l);
    cout<<endl;
    cout<<"for scalene angle :";
    cin>>m>>n>>o;
    cout<<triangleArea(m,n,o);
    

return 0;
}