#include <iostream>
using namespace std;

class Time {
private:
    int hour, min, sec;
public:
    Time() {
        hour = 0;
        min = 0;
        sec = 0;
    }
    Time(int h, int m, int s) {
        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
            hour = h;
            min = m;
            sec = s;
        } else {
            cout << "Invalid time" << endl;
            hour = min = sec = 0;
        }
    }
    bool operator==(const Time &t3) const {
        return (hour == t3.hour && min == t3.min && sec == t3.sec);
    }
    void display() const {
        cout << (hour < 10 ? "0" : "") << hour << ":"
             << (min < 10 ? "0" : "") << min << ":"
             << (sec < 10 ? "0" : "") << sec << endl;
    }
};

int main() {
    Time t1(7, 11, 30);
    Time t2(3, 30, 41);
    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();
    if (t1 == t2)
        cout << "Clocks show the same time" << endl;
    else
        cout << "Clocks show different time" << endl;
    return 0;
}
