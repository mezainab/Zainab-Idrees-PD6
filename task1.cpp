#include <iostream>
using namespace std;

string work(string temperature, string humidity, string activity);
main()
{
  string temperature, humidity, activity;

  cout<<"Enter the temperature: ";
  cin>>temperature;
  cout<<"Enter the humidity: ";
  cin>>humidity;

  activity = work(temperature, humidity, activity);
  cout<<activity;

}
  string work(string temperature, string humidity, string activity)
   {
   if(temperature == "warm" && humidity == "dry")
   {
    activity = "Play Tennis!";
   }
  if(temperature == "warm" && humidity == "humid")
   {
    activity = "Swim!";
   }
  if(temperature == "cold" && humidity == "dry")
   {
    activity = "Play basketball!";
   }
  if(temperature == "cold" && humidity == "humid")
  {
    activity = "Watch TV!";
  }
 return activity;
}