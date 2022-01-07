//program to illuatrate exception handling
#include<iostream>
using namespace std;

int main()
{
    int numerator, denominator, result;
    cout<<"Enter numerator and denominator"<<endl;
    cin>>numerator>>denominator;
    //exception handling
    try
        {
         if(denominator==0)
         //probable code for exception is put into try block
            {
                throw denominator;
                //removing the exception and pointing towards the catch block
            }   
        result=numerator/denominator;
        }
    catch(int ex)
        {
            cout<<"EXCEPTION: Denominator can not be ZERO"<<ex<<endl;
            //when exception is occured the flowing message will be displayed
        }
    cout<<"Result of the division will be:"<<result;
    return 0;
}
     