#include<iostream>
using namespace std;

class Complex {
    float real, img;
public:
    Complex(float r = 0, float i = 0) {
        real = r;
        img = i;
    }

    Complex operator + (Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    void display() {
        cout << real << "+" << img << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
