// movement of negative number from array to first and positive to last
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v(10);
  cout << "enter the neg. and pos. number  in array count 10 :" << endl;

  for (int i = 0; i < v.size(); i++)
  {
    cin >> v[i];
  }
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  
  int i = 0;
  for (int k = 0; k < v.size(); k++)
  {
    if (v[k] < 0)
    {
      swap(v[i], v[k]);
      i++;
    }
  }
  // int i,j;
  // for (int i = 0 ,j = v.size()-1; i<j; i++, j--)
  // {
  //   if (v[j]< v[i])
  //   {
  //     int  temp = v[i];
  //   v[i] = v[j];
  //   v[j] = temp;
  //   }

  // }
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}