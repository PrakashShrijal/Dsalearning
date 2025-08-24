#include <iostream>
using namespace std;

class Shop
{
private:
    int ID[100];    // Array to store item IDs
    int Price[100]; // Array to store item prices
    int itemCount;  // To keep track of the number of items

public:
    // Constructor to initialize itemCount
    Shop() : itemCount(0) {}

    // Function to set the ID and Price of an item
    void setPrice(int id, int price)
    {
        if (itemCount < 100)
        { // Check to avoid overflow
            ID[itemCount] = id;
            Price[itemCount] = price;
            itemCount++;
        }
        else
        {
            cout << "Cannot add more items, array is full." << endl;
        }
    }

    // Function to display the IDs and Prices of all items
    void getPrice()
    {
        for (int i = 0; i < itemCount; i++)
        {
            cout << "ID: " << ID[i] << ", Price: " << Price[i] << endl;
        }
    }
};

int main()
{
    // Creating shop objects
    Shop Amazon;
    Shop Flipkart;

    // Setting prices for items in shop1
    Amazon.setPrice(101, 250);
    Amazon.setPrice(102, 450);

    // Setting prices for items in shop2
    Flipkart.setPrice(201, 150);
    Flipkart.setPrice(202, 350);

    // Displaying prices for items in shop1
    cout << "Items Amazon:" << endl;
    Amazon.getPrice();

    // Displaying prices for items in shop2
    cout << "Items in Flipkart:" << endl;
    Flipkart.getPrice();

    return 0;
}