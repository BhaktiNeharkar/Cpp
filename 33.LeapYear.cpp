#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year ";
    cin>>year;
    if(year % 4 == 0)
    {
      if(year % 100 == 0)
      {
      if (year%400==0)
       cout<<year<<"is a leap year";
       else 
       cout<<year<<"is NOT a leap year";
      }
     else 
     cout<<" is a leap year";
    }
    else cout<<year<<" is not a leap year";
    return 0;
}