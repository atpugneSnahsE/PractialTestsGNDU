#include<iostream>
using namespace std;
 class sum
 {
     public:
     int a,b;
     void input()
     {
         cout<<"enter number one:"<<
         cin<<a;
         cout<<"enter number two:"<<
         cin<<b;
     }
    void output()
    {
        cout<<"The num of the two numbers:"<<a+b;
    }
 };
 int main()
 {
     sum obj;
     obj.input();
     obj.output();
     
    return 0;
 }
