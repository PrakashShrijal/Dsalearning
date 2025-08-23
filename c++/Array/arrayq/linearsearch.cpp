#include<iostream>
using namespace std;
int main()
{int p[] = {23,56,4,32,45,12,21,30,67};
int key = 21;
int ans = -1;
for(int i = 0; i< 9; i++){
    if(p[i]==key){
        ans=i;
    }
}
cout<<ans<<endl;

return 0;
}