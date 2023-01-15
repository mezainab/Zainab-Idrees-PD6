#include <iostream>
using namespace std;

string zodiac(int date, string month, string zodiacSign);
main()
{
    int date;
    string month, zodiacSign;

    cout<<"Enter your birthdate: ";
    cin>>date;
    cout<<"Enter your month: ";
    cin>>month;
    
zodiacSign = zodiac(date, month, zodiacSign);
cout<<zodiacSign;
}
string zodiac(int date, string month, string zodiacSign)
{
    if(month == "March" && date >= 21 || month == "April" &&  date <= 19)
    {
        zodiacSign = "Aries";
    }
    else if(month == "April" && date >= 20 || month == "May" && date <= 20)
    {
        zodiacSign = "Taurus";
    }
    else if(month == "May" && date >= 21 || month == "June" && date <= 20)
    {
        zodiacSign = "Gemini";
    }
    else if(month == "June" && date >= 21 || month == "July" && date <= 22)
    {
        zodiacSign = "Cancer";
    }
    else if(month == "July" && date >= 23 || month == "August" && date <= 22)
    {
        zodiacSign = "Leo";
    }
    else if(month == "August" && date >= 23 || month == "September" && date <= 22)
    {
        zodiacSign = "Virgo";
    }
    else if(month == "September" && date >= 23 || month == "October" && date <= 22)
    {
        zodiacSign = "Libra";
    }
    else if(month == "October" && date >= 23 || month == "November" && date <= 21)
    {
        zodiacSign = "Scorpio";
    }
    else if(month == "November" && date >= 22 || month == "December" && date <= 21)
    {
        zodiacSign = "Sagittarius";
    }
    else if(month == "December" && date >= 22 || month == "January" && date <= 19)
    {
        zodiacSign = "Capricorn";
    }
    else if(month == "January" && date >= 20 || month == "Febuarary" && date <= 18)
    {
        zodiacSign = "Aquarius";
    }
    else if(month == "Febuary" && date >= 19 || month == "March" && date <= 20)
    {
        zodiacSign = "Pisces";
    }
return zodiacSign;
}