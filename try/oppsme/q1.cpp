// concept of passing array as argument in function, friend void displayBooks(Books book[], int size);
//concept of friend function.
//



#include <iostream>
#include <string>
using namespace std;
class Books
{
    string title;
    string author;
    float price;

public:
    // constuctor
    Books(string t, string a, float p) : title(t), author(a), price(p) {}
    // friend function
    friend void displayBooks(Books book[], int size);
};
void displayBooks(Books books[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Book :" << i + 1 << " Details" << endl; // this
        cout << "Title :" << books[i].title << endl;
        cout << "author : " << books[i].author << endl;
        cout << "price : " << books[i].price << endl;
        cout << "--------------------" << endl;
    }
}
int main()
{ // aaray of objects
    Books booksArray[] = {
        Books("the great gastsby", "f. scott Fitzga=erald", 10.99),
        Books("1984", "George Orwell", 8.99),
        Books("To kill a Mockingbird", "Harper Lee", 7.50)};
    int size = sizeof(booksArray) / sizeof(booksArray[0]); //why this?

    displayBooks(booksArray, size);
    return 0;
}