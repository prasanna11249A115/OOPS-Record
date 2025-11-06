#include<iostream>
using namespace std;

class paybill {
private:
    int age, accountnumber;
    char name[50];
    float salary, hra, da, pf, gross_salary, net;
    char employeeid[50];

public:
    void getdata();
    void calculate();
    void display();
};

void paybill::getdata() {
    cout << "Enter the employee name: ";
    cin >> name;
    cout << "Enter the employee ID: ";
    cin >> employeeid;
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter the account number: ";
    cin >> accountnumber;
    cout << "Enter the salary: ";
    cin >> salary;
}

void paybill::calculate() {
    hra = 0.20 * salary;
    da = 0.10 * salary;
    pf = 0.08 * salary;
    gross_salary = salary + hra + da;
    net = gross_salary - pf;
}

void paybill::display() {
    cout << "\n------PAY BILL-------\n";
    cout << "Employee Name : " << name << endl;
    cout << "Age           : " << age << endl;
    cout << "Account Number: " << accountnumber << endl;
    cout << "Employee ID   : " << employeeid << endl;
    cout << "Salary        : " << salary << endl;
    cout << "HRA           : " << hra << endl;
    cout << "DA            : " << da << endl;
    cout << "PF            : " << pf << endl;
    cout << "Gross Salary  : " << gross_salary << endl;
    cout << "Net Salary    : " << net << endl;
}

int main() {
    paybill emp;
    emp.getdata();
    emp.calculate();
    emp.display();
    return 0;
}
