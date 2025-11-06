#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private:
char name[20];
int rno;
public:
void getstudent()
{
cout<<"enter name of the student=";
cin>>name;
cout<<"enter roll number of the student=";
cin>>rno;
}
void displaystudent()
{
cout<<"name of the student="<<name;
cout<<"\nroll number of the student="<<rno;
}
};
class address : public student
{
private:
char city[20];
public:
void getaddress()
{
getstudent();
cout<<"\nenter city=";
cin>>city;
}
void displayaddress()
{
displaystudent();
cout<<"\ncity="<<city;
}
};
int main()
{
address a1;
a1.getaddress();
a1.displayaddress();
getch();
}