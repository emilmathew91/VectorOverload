#include <W07-03-Vector.h>
using namespace std;

int main(){
	Vector myVector;  //default constructor, points to Vector::Vector() in imp
	Vector myFirstVector (4,5);//First Vector, random data, points to Vector::Vector(double, double) in imp
	Vector mySecondVector (3.2, 5.6);//Second vector, random data , points to Vector::Vector(double, double) in imp
	Vector resultVector;//result vector points to Vector::Vector() in imp

	resultVector = myFirstVector + mySecondVector; //addition and assignment operator

	cout << "The first vector is < " << myFirstVector << ">" << endl; //cout
	cout << "The second vector is < " << mySecondVector << ">" << endl; //cout 
	cout << "Vector one + Vector two = " << resultVector << ">" << endl;//cout addition

	resultVector = myFirstVector - mySecondVector; //subtraction and assingment operator

	cout << "The first vector is < " << myFirstVector << ">" << endl; //cout
	cout << "The second vector is < " << mySecondVector << ">" << endl;//cout
	cout << "Vector one - Vector two = " << resultVector << ">" << endl;//cout


}