#include<iostream>
using namespace std;
class employee {
private:
char name[50];
int age;
float salary;
char id[20];
int accountnumber;
public:
void getdata();
void displaydata();
};
void employee::getdata() {
cout<<"enter employee name:"<<endl;
cin>> name;
cout<<"enter the age:"<<endl;
cin>> age;
cout<<"enter id:"<<endl;
cin>> id;
cout<<"enter the accountnumber:"<<endl;
cin>> accountnumber;
cout<<"enter salary:"<<endl;
cin>>salary;
}
void employee::displaydata() {
    cout<<"\n----emplouee information----\n";
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"id:"<<id<<endl;
    cout<<"accountnumber:"<<accountnumber<<endl;
    cout<<"salary:"<<salary<<endl;
}
int main() {
employee e1,e2;
e1.getdata();
e1.displaydata();
e2.getdata();
e2.displaydata();
return 0;
}


