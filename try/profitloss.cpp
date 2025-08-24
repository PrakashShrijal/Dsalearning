#include<iostream>
using namespace std;
int main()
{
    int p[] = {1,5,8,34,2,76,89,45,90};
int max = 0,loss =0;
int profit =0;
for(int i = 0; i<= 9; i++){
    if (p[i] < p[i+1])
    {
        max = p[i+1];
        profit = max -p[i];
    }else
    {
        loss = p[i+1];
        profit = max - loss;

       
    }
}
    cout<<"profit"<<endl;
    


return 0;
}