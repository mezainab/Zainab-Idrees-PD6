#include <iostream>
using namespace std;
int exam(int startingHour, int startingMin, int arrivalHour, int arrivalMin);

main()
{
int startingHour, startingMin, arrivalHour, arrivalMin, differenceFirstDigit, differenceSecondDigit;
cout << "Exam starting time (hour): ";
cin >> startingHour;
cout << "Exam starting time (minutes): ";
cin >> startingMin;
cout << "Student hour of arrival (hour): ";
cin >> arrivalHour;
cout << "Student minutes of arrival: ";
cin >> arrivalMin;

int difference = exam(startingHour, startingMin, arrivalHour, arrivalMin);
    
if (difference < 0)
{
    difference = 0  - difference;
    if (difference >= 1)
    {
        if (difference <= 30)
        {
        cout << "On Time" <<endl;
        cout <<difference<< " Minutes before the exam" <<endl;
        }
        else if (difference > 30 && difference < 60)
        {
        cout << "Early" <<endl;
        cout << difference << " minutes before the exam" <<endl;
        }
        else if (difference >= 60)
        {
        int differenceInHour = difference/60;
        int differenceInMinutes = difference - differenceInHour*60;
         if (differenceInMinutes < 10)
         {
         differenceFirstDigit = 0;
         differenceSecondDigit = differenceInMinutes;
         }
         else if (differenceInMinutes >=10)
         {
         differenceFirstDigit = differenceInMinutes/10;
         differenceSecondDigit = differenceInMinutes%10;
         }
            cout << "Early" <<endl;
            cout<<differenceInHour<< ":" <<differenceFirstDigit<< differenceSecondDigit << " hours before the exam" <<endl;
        }
        }
    }
else if (difference > 0)
{
if (difference >= 1)
{
    if (difference >=60)
     {
     int differenceInHour = difference/60;
     int differenceInMinutes = difference - differenceInHour*60;
     if (differenceInMinutes < 10)
     {
     differenceFirstDigit = 0;
     differenceSecondDigit = differenceInMinutes;
     }
     else if (differenceInMinutes >=10)
     {
     differenceFirstDigit = differenceInMinutes/10;
     differenceSecondDigit = differenceInMinutes % 10;
     }
     cout << "Late" << endl;
     cout <<differenceInHour<< ":" <<differenceFirstDigit<< differenceSecondDigit <<" hours after exam"<<endl; 
     }
     else if (difference < 60)
     {
     cout << "Late" << endl;
     cout <<difference<< " minutes after the exam" <<endl;
     }
    }
    }
    else if (difference == 0)
    {
     cout<< "On time"<<endl;
    }

}
int exam(int startingHour, int startingMin, int arrivalHour, int arrivalMin)
{
int difference;
int startingMinTotal = startingHour*60 + startingMin;
int arrivalMinTotal = arrivalHour*60 + arrivalMin;
difference = arrivalMinTotal - startingMinTotal;
return difference;
}