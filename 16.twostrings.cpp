#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
const int sz = 90;

class String {
    char str[sz];
public:
    String() {
        strcpy(str, "");
    }
    String(const char *s) {
        strcpy(str, s);
    }
    void display() {
        cout << str << "\n";
    }
    String operator + (String ss) {
        String temp;
        if (strlen(str) + strlen(ss.str) < sz) {
            strcpy(temp.str, str);
            strcat(temp.str, ss.str);
        } else {
            cout << "String overflow\n";
        }
        return temp;
    }
};

int main() {
    String s1("Hello");
    String s2("World");
    String s3;
    s3 = s1 + s2;
    s1.display();
    s2.display();
    s3.display();
    getch();
}
