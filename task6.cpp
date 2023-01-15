#include <iostream>
using namespace std;

float priceStay(string month, int noOfStays);
main()
{
    string month;
    int noOfStays;
    float finalPrice;
    float apartmentPrice;
    float studioPrice;

    cout<<"Enter the month: ";
    cin>>month;
    cout<<"Enter number of stays: ";
    cin>>noOfStays;

    finalPrice = priceStay( month, noOfStays);
   
}
float priceStay(string month, int noOfStays)
{
    float studioPrice; 
    float apartmentPrice; 
    float finalPrice;

    if((month == "May" || month == "October") && (noOfStays > 7 && noOfStays <= 14))
    {
        studioPrice = noOfStays * (50 - (50 * 0.05));
        apartmentPrice = noOfStays * 65;
        cout<<"Apartment: "<<apartmentPrice<<" $ "<<endl;
        cout<<"Studio: "<<studioPrice<<" $ "<<endl;
    }
    else if((month == "May" || month == "October") && (noOfStays > 14))
    {
        studioPrice = noOfStays * (50 - (50 * 0.3));
        apartmentPrice = noOfStays * (65 - (65 * 0.1));
        cout<<"Apartment: "<<apartmentPrice<<" $ "<<endl;
        cout<<"Studio: "<<studioPrice<<" $ "<<endl;
    }
    else if((month == "June" || month == "September") && (noOfStays > 14 ))
    {
        studioPrice =  noOfStays * (75.20 - (75.20 * 0.2));
        apartmentPrice = noOfStays * (68.70 - (68.20 * 0.1));
        cout<<"Apartment: "<<apartmentPrice<<" $ "<<endl;
        cout<<"Studio: "<<studioPrice<<" $ "<<endl;
    }
    else if((month == "July" || month == "August") && (noOfStays < 14))
    {
        studioPrice = noOfStays * 76;
        apartmentPrice = noOfStays * 77;
        cout<<"Apartment: "<<apartmentPrice<<" $ "<<endl;
        cout<<"Studio: "<<studioPrice<<" $ "<<endl;
    }
    else if((month == "July" || month == "August") && (noOfStays > 14))
    {
        studioPrice = noOfStays * 76;
        apartmentPrice = noOfStays * ( 77- (77 * 0.1));
        cout<<"Apartment: "<<apartmentPrice<<" $ "<<endl;
        cout<<"Studio: "<<studioPrice<<" $ "<<endl;
    }
return finalPrice;
}