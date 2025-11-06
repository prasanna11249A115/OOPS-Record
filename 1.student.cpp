#include <iostream>
using namespace std;
class student {
private:
    char name[50];
    int age;
    char course[50];
public:
    void inputdetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter course: ";
        cin >> course;
    }
    void displaydetails() {
        cout << "\n--- STUDENT INFORMATION ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;  
    }
};
int main() {
    student s1;
    s1.inputdetails();
    s1.displaydetails();
    return 0;
}
