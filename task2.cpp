#include <iostream>
using namespace std;

string marks(float totalMarks, float percentage, string grade, string name);
main()
{
float totalMarks, percentage;
int english, math, chemistry, socialScience, bio;
string grade, name = " ";

cout<<"Enter student's name: ";
cin>>name;
cout<<"Enter English marks: ";
cin>>english;
cout<<"Enter Maths marks: ";
cin>>math;
cout<<"Enter Chemistry marks: ";
cin>>chemistry;
cout<<"Enter socialScience marks: ";
cin>>socialScience;
cout<<"Enter Biology marks: ";
cin>>bio;


totalMarks = (english + math + chemistry + socialScience + bio);
percentage = (totalMarks/500)*100;

cout<<"Name: "<<name<<endl;
cout<<"Total Marks: "<<totalMarks<<endl;
cout<<"Percentage: "<<percentage<<endl;

grade = marks(totalMarks, percentage, grade, name);
cout<<grade;
}
string marks(float totalMarks, float percentage, string grade, string name)
{
if(percentage >= 90 && percentage <= 100)
{
    grade = "A+";
}
if(percentage >= 80 && percentage <= 90)
{
    grade = "A";
}
if(percentage >= 70 && percentage <= 80)
{
    grade = "B+";
}
if(percentage >= 60 && percentage <= 70)
{
    grade = "B";
}
if(percentage >= 50 && percentage <= 60)
{
    grade = "C";
}
if(percentage >= 40 && percentage <= 50)
{
    grade = "D";
}
if(percentage < 40)
{
    grade = "F";
}
return grade;
}