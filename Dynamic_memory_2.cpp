#include<iostream>
using namespace std;

int main()
    {
        int size;
        //stored in stack
        int *array;
        //pointing towards the address in heap
        cout<<"Enter size of the array:"<<endl;
        cin>>size;
        array= new int[size];
        //creation of an array in the memory

        cout<<"Enter values to be stored by the array:"<<endl;
        for(int i=0; i<size; i++)
            {
                cout<<"Array["<<i<<"]";
                //takes the elements of th array
                cin>>array[i];
            }
        cout<<"values stored in the array are"<<endl;
        for(int i=0; i<size; i++)
            {
                cout<<array[i]<<"  ";
                //dispalys the elements in the array
            } 
    delete[]array;
    //manual deletion from the heap memory
    array= NULL;
    //ponting towards the nothing
    return 0;  
    }