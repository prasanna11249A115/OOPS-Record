#include<iostream>
using namespace std;
class student {
    private:
    int value;
    public:
    student() {
        value =0;
        
    }
    student (int v) {
        value=v;
        cout<<"constructor is called"<<endl;

    }
    ~student() {
        cout<<"destructor is called"<<endl; }
        void display() {
            cout<<"value:"<<value<<endl;
        }
  
};
int main() {
    cout<<"creating object d1"<<endl;
    student d1(10);
    d1.display();
    cout<<"program starts.."<<endl;
    student obj;
    cout<<"inside main function"<<endl;
    return 0;
}