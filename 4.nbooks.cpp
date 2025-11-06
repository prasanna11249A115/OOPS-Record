#include<iostream>
using namespace std;
class book{
    private:
    int accno,pages;
    char bookname[50],author[50],isbno[50];
    float price;
    public:
    void getdetails() {
        cout<<"enter bookname:";
        cin>> bookname;
        cout<<"enter name of author:";
        cin>> author;
        cout<<"enter pages:";
        cin>> pages;
        cout<<"enter accno:";
        cin>> accno;
        cout<<"enter isbno:";
        cin>> isbno;
        cout<<"enter price:";
        cin>> price; }
    void display() {
        cout<<"---book details--\n";
        cout<<"bookname:"<<bookname<<endl;
        cout<<"author:"<<author<<endl;
        cout<<"\npages:"<<pages<<endl;
        cout<<"accno:"<<accno<<endl;
        cout<<"isbno:"<<isbno<<endl;
        cout<<"price:"<<price<<endl;
    }
 };
 int main() {
    int n;
    cout<<"enter number of books:";
    cin>>n;
    book b[100];
    for(int i=0 ; i<n ; i++){
        cout<<"\n enter details for book"<<i+1<<"\n";
        b[i].getdetails();
    }
        cout<<"\n----library book details----\n";
        for (int i=0;i<n;i++) {
        cout<<"\nbook""<< i+1 << :\n";
        b[i].display(); 
     }
        return 0;
    }
 
