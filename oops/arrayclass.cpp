#include<iostream>
using namespace std;
class Shop
{
    private:
    int ID[100];
    int price[100];
    int s;
    public:
    void setPrices(int size)
    {
        s = size;
        for(int i = 0; i < s; i++)
        {
            cout<<" Enter id and price for item "<<i+1<<" sepaerated by space\n";
            cin>>ID[i];
            cin>>price[i];
        }
        cout<<endl;
    }
    void getPrices()
    {
        for(int i = 0; i < s; i++)
        {
            cout<<ID[i]<<" ";
            cout<<price[i]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
};

int main()
{
    Shop radhe_traders, bigBazar;
    radhe_traders.setPrices(4);
    radhe_traders.getPrices();
    bigBazar.setPrices(5);
    bigBazar.getPrices();
    return 0;
}