#include <iostream>
using namespace std;

float bill(char service, float noOfMinutes,float amountDue, char time);
main()
{
char service, time;
float noOfMinutes, amountDue = 0;

cout<<"Enter your type of Service (R for Regular and P for Premium): ";
cin>>service;
if(service == 'P')
{
    cout<<"Enter time : ";
    cin>>time;
}
cout<<"Enter number of minutes: ";
cin>>noOfMinutes;

amountDue = bill(service, noOfMinutes, amountDue, time);

cout<<amountDue;

}
float bill(char service, float noOfMinutes,float amountDue, char time)
{
   if(service == 'R' && noOfMinutes <= 50)
    {
        amountDue = 10;
    }
    else if(service == 'R' && noOfMinutes > 50)
    {
        amountDue = noOfMinutes * 10 * 0.20;
    }
    else if(service == 'P' && time == 'D' && noOfMinutes <= 75)
    {
        amountDue = 25;
    }
    else if(service == 'P' && time == 'D' && noOfMinutes > 75)
    {
        amountDue = noOfMinutes * 25 * 0.10;
    }
    else if(service == 'P' && time == 'N' && noOfMinutes <= 100)
    {
        amountDue = 25;
    }
    else if(service == 'P' && time == 'N' && noOfMinutes > 100)
    {
        amountDue = noOfMinutes * 25 * 0.05;
    }
    return amountDue;
 }
    
