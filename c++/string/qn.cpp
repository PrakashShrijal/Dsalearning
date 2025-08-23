/* given n string consisting of digits from 0 - 9. 
return the index of string which has maximum value.
(take 0 based indexing)
* input 0123,0023,456,00182,940,2901.
* output : 5
*/

#include<iostream>
#include<string>
#include<algorithm>     
using namespace std;
int main()
{
    string arr[] = {"0123","0023","456","00182","940","002901"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for (int  i = 0; i <=5; i++)
    {
        int x = stoi(arr[i]);
        if(x > max){
            max = x;
            maxS = arr[i];
        }
    }
    cout<<maxS<<" "<<max;
    
return 0;
}