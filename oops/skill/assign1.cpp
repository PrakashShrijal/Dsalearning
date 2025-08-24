#include <iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
class Date
{
    int date;
    int month;
    int year;

public:
    // void setDate(int date)
    // {
    //     this->date = date;
    // }
    // void setMonth(int month)
    // {
    //     this->month = month;
    // }
    // void setYear(int year)
    // {

    //     this->year = year;
    // }
    // int getDate()
    // {
    //     return date;
    // }
    // int getMonth()
    // {
    //     return month;
    // }
    // int getYear()
    // {
    //     return year;
    // }
    Date(int d, int m, int y)
    {
        date = d;
        month = m;
        year = y;
    }

    int isEqualTo(const Date &other)const
    {
        if (date == other.date && month == other.month && year == other.year)
        {
            cout << "Equal Dates";
        }
        else
        {
            cout << "Dates are not equal";
        }
    }
    //duplicate for over loading due to return type
    // bool isEqualTo(const Date &other)const
    // {
    //     return date == other.date && month == other.month && year == other.year;
       
    // }

    bool isLaterThan(const Date &other)const
    {
        if (year > other.year)

        {
            return true;
        }
        else if (year == other.year)
        {
            if (month > other.month)
            {
                return true;
            }
            else if (month == other.month)
            {
                return date > other.date;
            }
        }
        return false;
    }

     bool isEarlierThan(const Date &other)const
    {
        if (year < other.year)

        {
            return true;
        }
        else if (year == other.year)
        {
            if (month < other.month)
            {
                return true;
            }
            else if (month == other.month)
            {
                return date < other.date;
            }
        }
        return false;
    }

    int compareTo(const Date& other){
        if(year < other.year ||
        (year == other.year && month < other.month) ||
        (month == other.month && date < other.date)){
            return -1;
        }else if(year == other.year && month == other.month && date == other.date){
            return 0;
        }else{
            return 1;
        }
        
        
    }

    // date difference
    int daysSinceEpoch()const{
        return year*365 + month*30 + date;
    }

    int daysDifference(const Date& other){
        return abs(daysSinceEpoch() - other.daysSinceEpoch());
        /*(abs) is standard library function. this make sure the result 
        of substraction is positive, useful in calculating difference in a lkogical manner*/ 
   }

    //check of leap year
    bool isLeapYear()const{
        return (year % 4 == 0 && (year % 100 != 0 || year% 400 ==0));
    }

    // Overloading Relational operators
    bool operator <( const Date& other)const{
        
        return isEarlierThan(other);
    }
    bool operator >(const Date& other)const{
        return isLaterThan(other);
    }
    bool operator ==(const Date& other)const{
        return isEqualTo(other);
    }

    bool operator !=(const Date& other){
        return !isEqualTo(other);
    }

};
int main()
{
    // date d1,d2;
    // d1.setDate(23);
    // d1.setMonth(8);
    // d1.setYear(2004);
    // d2.setDate(3);
    // d2.setMonth(5);
    // d2.setYear(2004);

    // cout<<d1.getDate()<<" "<<d1.getMonth()<<" "<<d1.getYear()<<endl;
    // cout<<d2.getDate()<<" "<<d2.getMonth()<<" "<<d2.getYear()<<endl;

    Date d1(3, 05, 2004);
    Date d2(23, 8, 2004);

    d1.compareTo(d2);
    cout<<endl;
    if(d1.isLaterThan(d2)){
        cout<<"d1 is later";
    }else{
        cout<<"d1 is not later";
    }
cout<<endl;

    int result =d1.compareTo(d2);
    if(result == -1){
        cout<<"Date1 is earlier than date2"<<endl;
    }else if(result == 0){
        cout<<"Date1 are equal to date 2"<<endl;
    }else{
        cout<<"date 1 is later than date 2"<<endl;
    }


    //difference in date
    cout<<"Difference in days:"<<d1.daysDifference(d2)<<endl;

    // check  of leapYear
     cout<<d1.isLeapYear()<<endl;

    // operator overloading
    if(d1 < d2){
        cout<<"D1 is earlier than d2"<<endl;
    }
    if(d1 < d2){
        cout<<"d1 is later than d2"<<endl;
    }
   int ren = d1 == d2;
   cout<<ren<<endl;

   char too = d1 != d2;
   cout<<too;
   

    return 0;
}