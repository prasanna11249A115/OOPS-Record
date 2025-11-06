#include <iostream>
using namespace std;
class student {
private:
    char name[20];
    int rno;
public:
    void getstudent() {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }
    void displaystudent() {
        cout << "\nName of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};
class address {
private:
    char city[20];
public:
    void getaddress() {
        cout << "Enter city: ";
        cin >> city;
    }

    void displayaddress() {
        cout << "\nCity: " << city;
    }
};
class account : public student, public address {
private:
    int tfee, submit, balance;
public:
    void getaccount() {
        getstudent();
        getaddress();
        cout << "Enter total fee: ";
        cin >> tfee;
        cout << "Enter submitted fee: ";
        cin >> submit;
    }
    void displayaccount() {
        displaystudent();
        displayaddress();
        cout << "\nTotal fee: " << tfee;
        cout << "\nSubmitted fee: " << submit;
        balance = tfee - submit;
        cout << "\nBalance fee: " << balance << endl;
    }
};
int main() {
    account a1;
    a1.getaccount();
    a1.displayaccount();
    cin.ignore();
    cin.get();
    return 0;
}
