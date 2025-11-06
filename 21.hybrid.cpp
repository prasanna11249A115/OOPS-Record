#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPersonData(string n, int a) {
        name = n;
        age = a;
    }
    void showPersonData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : virtual public Person {
protected:
    int studentID;
public:
    void setStudentData(int id) {
        studentID = id;
    }
    void showStudentData() {
        cout << "Student ID: " << studentID << endl;
    }
};

class Teacher : virtual public Person {
protected:
    string subject;
public:
    void setTeacherData(string sub) {
        subject = sub;
    }
    void showTeacherData() {
        cout << "Subject: " << subject << endl;
    }
};

class TA : public Student, public Teacher {
public:
    void showTAData() {
        showPersonData();
        showStudentData();
        showTeacherData();
    }
};

int main() {
    TA ta1;
    ta1.setPersonData("Alice", 25);
    ta1.setStudentData(101);
    ta1.setTeacherData("Mathematics");

    cout << "TA Information:" << endl;
    ta1.showTAData();

    return 0;
}
