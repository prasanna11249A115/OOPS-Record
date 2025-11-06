#include <iostream>
#include <cstring>
using namespace std;
class eb {
private:
    int units, customerid;
    float amount;
    char name[50];

public:
    void getdetails();
    void computebill();
    void printbill();
};
void eb::getdetails() {
    cout << "Enter customer ID: ";
    cin >> customerid;
    cout << "Enter amount of units consumed: ";
    cin >> units;
    cout << "Enter customer name: ";
    cin.ignore(); // to clear buffer before getline
    cin.getline(name, 50);
}
void eb::computebill() {
    if (units <= 100)
        amount = 0;
    else if (units <= 200)
        amount = (units - 100) * 2.25;
    else if (units <= 400)
        amount = (100 * 2.25) + (units - 200) * 4.25;
    else if (units <= 600)
        amount = (100 * 2.25) + (200 * 4.25) + (units - 400) * 6.00;
    else
        amount = (100 * 2.25) + (200 * 4.25) + (200 * 6.00) + (units - 600) * 9.00;
}
void eb::printbill() {
    cout << "\n--- ELECTRICITY BILL ---" << endl;
    cout << "Customer ID : " << customerid << endl;
    cout << "Name         : " << name << endl;
    cout << "Units Used   : " << units << endl;
    cout << "Bill Amount  : Rs. " << amount << endl;
}
int main() {
    eb e1;
    e1.getdetails();
    e1.computebill();
    e1.printbill();
    return 0;
}
