#pragma once
#ifndef __VECTOR__
#define __VECTOR
#include <iostream>__
#include <math.h>
using namespace std;

// CLASS SPECIFICATION 

class Vector {
private: 
	// DATA MEMBERS 
	double _v_x; 
	double _v_y;
	double _magnitude;
	
	

	// HELPER METHODS
	void CalculateMagnitude();
	
public: 
		// CONSTRUCTOR(S) 
		Vector(); 
		Vector(double _v_x, double _v_y);
		
		//OVERLOADS
		void operator=(Vector value) {//assignment operator overload
			this->_v_x = value._v_x; //sets _v_x and _v_y to the value's x and y that is passed. 
			this->_v_y = value._v_y;
		}
		Vector operator+(Vector value) { //addition operator
			value = AddVector(value); //sets value to what is returned from addVector and returns
			return value;
		}
		friend ostream& operator<<(ostream& outputStream, Vector& value) { //output
			outputStream << value._v_x << ", " << value._v_y;
			return outputStream;
		}

		friend istream& operator>>(istream& inputStream, Vector& value) {
		inputStream >> value._v_x >> value._v_y;
		return inputStream;
}

		Vector operator-(Vector value) { //subraction operator 
			value = SubtractVector(value); //sets value to what is returned from subtractVector and returns
			return value;
		}
		
		// SETTERS

		void SetVX(double _v_x);
		void SetVY(double _v_y);
		
		// GETTERS 
		double GetVX();
		double GetVY(); 
		double GetMagnitude();

		// OPERATIONS 
		Vector AddVector(Vector addMe); 
		Vector SubtractVector(Vector subtractMe); 
		// DISPLAY METHODS 
		void Display(); 
}; 


#endif