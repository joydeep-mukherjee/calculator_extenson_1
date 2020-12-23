/*
We extend the basic calculator project to perform calculations on double data type
We use template to redefine Calc as generic class with generic methods
We invoke an object of the generic Calc class with data type double to do this
*/
#include<iostream>
using namespace std;
#include "calc.h"
//note that we had to include the statement below for template use in main to work
#include "calc.cpp"



int main()
{
	cout<<"Performing Calculations on Double Data Type:"<<endl;
	Calc <double> obj1(2);
	obj1.calculate();

	cout<<"Performing Calculations on Integer Data Type:"<<endl;
	Calc <int> obj2(2);
	obj2.calculate();
}
