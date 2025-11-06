#include<iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    void gettime();
    void addtime(Time t1, Time t2);
    void displaytime();
};

void Time::gettime() {
    cout << "Enter the hours: ";
    cin >> hours;
    cout << "Enter the minutes: ";
    cin >> minutes;
}

void Time::addtime(Time t1, Time t2) 
{
   minutes = t1.minutes + t2.minutes;
   hours = minutes/60;
   minutes= minutes%60;
   hours= hours+t1.hours+t2.hours;
}
void Time::displaytime() {
    cout << "Hours: " << hours << ", Minutes: " << minutes << endl;
}

int main()
 {
    Time t1, t2, t3;
    t1.gettime();
    t2.gettime();
    t3.addtime(t1, t2);

    cout << "Time t1: ";
    t1.displaytime();
    cout << "Time t2: ";
    t2.displaytime();
    cout << "Sum of Times:";
    t3.displaytime();
    return 0;
}
