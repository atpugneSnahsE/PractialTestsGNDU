#include<iostream>
using namespace std;
int main()
    {
        int(*a)[5];
        int b[5]={1,2,3,4,5};
        int i =0;
        a=&b;
        for(i=0; i<5; i++) 
        cout<<" "<<*(*a+i)<<endl;
        return 0;
    }

