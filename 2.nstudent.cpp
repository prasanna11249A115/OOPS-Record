#include<iostream>
using namespace std;
class student {
    private:
    int rollno,m1,m2,m3;
    char name[50];
    float total;
    float avg;
    public:
    void getdata() {
        cout<<"enter name:",
        cin>>name;
        cout<<"enter rollno.:",
        cin>>rollno;
        cout<<"enter marks:",
        cin>>m1>>m2>>m3;
    }
      void calculate() {
        total=m1+m2+m3;
        avg=total/3;
      }
        void print() {
            cout<<"\nname:"<<name;
            cout<<"\nrollno:"<<rollno;
            cout<<"\nmark 1:"<<m1;
            cout<<"\n mark2:"<<m2;
            cout<<"\nmark3:"<<m1;
            cout<<"\ntotal:"<<total;
            cout<<"\naverage:"<<avg;
        }
      
        };
        int main(){
            int n;
            cout<<"\nenter number of students:";
            cin>>n;
            student s[100];
            for(int i=0;i<n;i++) {
                cout<<"\n enter details for student"<< i+1 <<"\n";
                s[i].getdata();
                s[i].calculate();
            }
                cout<<"\n---student data--\n";
                for(int i=0;i<n;i++) {
                 cout<<"\nstudent"<<i+1<<"details:\n";
                 s[i].print();
            }
                   return 0;
        }
            
        
      