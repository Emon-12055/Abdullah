/*Design a TimeTraveler class that holds the year a person is from.
Overload the > operator to compare two time travelers and determine
 who comes from a more distant past.. solve in c++ in simple way   */


#include<iostream>
using namespace std;
class time_travel
{
    int year;
public:
    time_travel(int y)
    {
        year=y;
    }
    int get_year()
    {
        return year;
    }
     bool operator> (time_travel &other )
     {
         return year< other.year;
     }

};
int main()
{
    time_travel tra1 (2000);
    time_travel tra2 (3000);
    time_travel tra3(1000);

    if(tra1>tra2)
    {
        cout<< " Traveler 1 : "<< tra1.get_year();
        cout<< "   comes form more distance past than  ";
        cout<< " traveler 2 : "<< tra2.get_year()<<endl;
    }
    else
    {
        cout<< " Traveler 2 : "<< tra2.get_year();
        cout<< "   comes form more distance past than  ";
        cout<< " traveler 1 : "<< tra1.get_year()<<endl;
    }

    if(tra2>tra3)
    {
         cout<< " Traveler 2 : "<< tra2.get_year();
        cout<< "   comes form more distance past than  ";
        cout<< " traveler 3 : "<< tra3.get_year()<<endl;
    }
    else
        {
         cout<< " Traveler 3 : "<< tra3.get_year();
        cout<< "   comes form more distance past than  ";
        cout<< " traveler 2 : "<< tra2.get_year()<<endl;
        }

    return 0;
}
