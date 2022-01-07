// C++ program for Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class animal
{
public:
	animal()
	{
	cout << "This is an animal" << endl;
	}
};

//base class
class food
{
	public:
	food()
	{
		cout<<"food of animal\n";
	}
};

// first sub class
class cat: public animal
{

};

// second sub class
class dog: public animal, public food
{
	
};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base class
	dog obj2;
	return 0;
}

