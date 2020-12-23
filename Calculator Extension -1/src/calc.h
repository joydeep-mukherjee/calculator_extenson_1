/*
 * calc.h
 *
 *  Created on: Jun. 4, 2020
 *      Author: Joydeep
 */

#ifndef CALC_H_
#define CALC_H_

//note the use of template below
template <class T>
class Calc {
	int number_of_inputs;
public:
	Calc(int val);
	void calculate();
	//redefine this method below with template T
	void print(T num);
};



#endif /* CALC_H_ */
