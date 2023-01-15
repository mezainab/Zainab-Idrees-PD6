#include <iostream>
using namespace std;

float totalprice(string fruit, string day, int quantity, float price);
main()
{
string fruit, day;
int quantity;
float price;

cout<<"Enter the name of your fruit: ";
cin>>fruit;
cout<<"Enter the day: ";
cin>>day;
cout<<"Enter the quantity: ";
cin>>quantity;

price = totalprice( fruit, day, quantity, price);
cout<<price;

}
float totalprice(string fruit, string day, int quantity, float price)
{
if((day == "Sunday" || day == "Saturday" )&& fruit == "Banana")
{
    price = quantity*2.70;
}
else if((day == "Sunday" || day == "Saturday" )&& fruit == "Apple")
{
    price = quantity*1.25;
}
else if((day == "Sunday" || day == "Saturday" )&& fruit == "Orange")
{
    price = quantity*0.90;
}
else if((day == "Sunday" || day == "Saturday" )&& fruit == "Grapefruit")
{
    price = quantity*1.60;
}
else if((day == "Sunday" || day == "Saturday" )&& fruit == "Kiwi")
{
    price = quantity*3.00;
}
else if((day == "Sunday" || day == "Saturday" )&& fruit == "Pineapple")
{
    price = quantity*5.60;
}
else if((day == "Sunday" || day == "Saturday" )&& fruit == "Grapes")
{
    price = quantity*4.20;
}
if((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")&& fruit == "Banana")
{
    price = quantity*2.50;
}
else if((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" )&& fruit == "Apple")
{
    price = quantity*1.20;
}
else if((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" )&& fruit == "Orange")
{
    price = quantity*0.85;
}
else if((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")&& fruit == "Grapefruit")
{
    price = quantity*1.45;
}
else if((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")&& fruit == "Kiwi")
{
    price = quantity*2.70;
}
else if((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")&& fruit == "Pineapple")
{
    price = quantity*5.50;
}
else if((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")&& fruit == "Grapes")
{
    price = quantity*3.85;
}
return price;
}