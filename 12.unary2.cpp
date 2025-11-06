#include <iostream>
using namespace std;
class Number {
private:
    int x;
public:
    Number(int n = 0) {
        x = n;
    }
    void operator++() {
        ++x;
    }
    void operator--() {
        --x;
    }
    void display() {
        cout << "Value of x: " << x << endl;
    }
};
int main() {
    Number n1(10);
    cout << "Initial ";
    n1.display();
    ++n1;
    cout << "After increment ";
    n1.display();
    --n1;
    cout << "After decrement ";
    n1.display();
    return 0;
}
