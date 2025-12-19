// 1402. Reducing Dishes
#include<bits/stdc++.h>
using namespace std;

    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        vector<int> suff(n);
        suff[n-1] = satisfaction[n-1]; 

        for(int i = n-2; i >=0 ; i--){
            suff[i] = suff[i+1] + satisfaction[i];
        }
        int idx = -1;
        for(int i = 0; i < n; i++){
            if(suff[i] >= 0){
                idx = i;
            break;
            } 
        }
        if(idx == -1) return 0;
        int maxSat = 0;
        int x = 1;
        for(int i = idx; i < n; i++){
            maxSat += (satisfaction[i] * x);
            x++;
        }
        return maxSat;
    }



int main()
{
    vector<int>arr(3);
    cout<<"Enetr the array elements:";
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    int result=  maxSatisfaction(arr);
    cout<<result;

return 0;
}
