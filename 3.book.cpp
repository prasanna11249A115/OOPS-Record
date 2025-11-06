#include<iostream>
using namespace std;
class book {
private:
int accno, pages;
char bookname[50], author[50], isbno[50];
float price;
public:
void getdetails() {
    cout<< "\nenter bookname:";
    cin>> bookname;
    cout<< "\nenter author:";
    cin>> author;
    cout<< "\nenter isbno:";
    cin>> isbno;
    cout<< "\nenter pages:";
    cin>> pages;
    cout<< "\nenter accno:";
    cin>> accno;
    cout<< "\nenter price:";
    cin>> price;
}
void display() {
    cout<< "\nbook details\n"<<endl;
    cout<< "bookname:"<< bookname << endl;
    cout<< "author:"<< author << endl;
    cout<< "isbno:"<< isbno << endl;
    cout<< "pages:"<< pages << endl;
    cout<< "accno:"<< accno << endl;
    cout<< "price:"<< price << endl;
}
};
int main() {
    book s;
    s.getdetails();
    s.display();
    return 0;
}
