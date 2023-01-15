#include <iostream>
using namespace std;

string place(int h, int x, int y);
main()
{
int h, x, y;
cout<<"Enter h: ";
cin>>h;
cout<<"Enter x coordinate: ";
cin>>x;
cout<<"Enter y coordinate: ";
cin>>y;

string position = place(h, x, y);

cout<<position;

}
string place(int h, int x, int y)
{
    string position;
if((x > 0 && x < h) && (y > 0 && y < h)) 
{
    position = "Inside";
}
else if ((x > h && x < h * 2) && (y < h * 4))
{
    position = "Inside";
}
else if ((x > h * 2 && x < h * 3) && y < h)
{
    position = "Inside";
}
else if (x < 0 || y < 0)  
{
    position = "Outside";
}
else if ((x > 0 &&  x < h ) && y > h)
{
    position = "Outside";
}
else if ((x > 0 && x < h * 2) && y > h * 4)
{
    position = "Outside";
}
else if ((x > 0 && x < h * 3) && y > h)
{
    position = "Outside";
}
else if ((x == 0 && y > h))
{
    position = "Outside";
}
else if (x == 0 && y == 0) 
{
    position = "Borderline";
}
else if ((x > 0 && x <= h * 3) && y == 0)
{
    position = "Borderline";
}
else if (( x > 0 && x <= h ) && (y > 0 && y <= h)) 
{
    position = "Borderline";
}
else if (( x > 0 && x == h) && (y > 0 && y <= h * 4))
{
    position = "Borderline";
}
else if (( x > 0 && x >= h && x <= h * 2) &&  (y == h * 4))
{
    position = "Borderline";
}
else if ((x > 0 && x == h * 2) && ( y > h && y <= h * 4))
{
    position = "Borderline";
}
else if (( x > h * 2 && x < h * 3) && (y == h))
{
    position = "Borderline";
}
else if (( x > h * 2 && x == h * 3) && (y > 0 && y <= h))
{
    position = "Borderline";
}
return position;
}