#include <iostream>
using namespace std;
int main()
{
    int *arr;
    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    cout<<"Creating an array of size"<<size<<"..."<<endl;

    arr= new int[size];
    cout<<"Dynamic memory allocation of the array is successful"<<endl;

    delete arr;
    return 0;
}