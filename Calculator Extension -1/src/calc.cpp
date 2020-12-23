#include<iostream>
#include<math.h>
using namespace std;
#include "calc.h"

//note that we need to redefine declaration this way for using methods with templates
template <class T>
Calc<T>::Calc(int val)
{
	number_of_inputs=val;
}

template <class T>
void Calc<T>::calculate()
{
	//note template use in line below
	T input[number_of_inputs];
	int flag=1;
	char op;
	do
	{
		for (int i=0; i<number_of_inputs; i++)
		{
		cout<<"Enter the input variable: ";
		cin>>input[i];
		}
		cout<<"Enter the operator: ";
		cin>>op;
		if(op=='^')
			print(pow(input[0], input[1]));
		else if (op=='+')
			print(input[0] + input[1]);
		else if (op=='*')
			print(input[0] * input[1]);
		else if (op=='/')
			print(input[0]/input[1]);
		else
			cout<<"Invalid Operator!!";
		cout<<endl<<"Want to continue? (Press 1 to continue, any other key to exit): ";
		cin>>flag;
	}while(flag==1);
}

//note that we need to redefine declaration this way for using methods with templates
template <class T>
void Calc<T>::print(T num)
{
	cout<<"The result is: "<< num;
}
