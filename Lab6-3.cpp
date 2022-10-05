//Lab6-3
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
	double n;
	int numInt = 0;
	double sum = 0;
	double distance;
	double sumsquare = 3.75;
	double avg;
	double stdDev;

	//Enter input values
	cout << "Enter numbers - Q to quit: ";
	
	while (cin >> n) {
		sum = sum + n;
		numInt++;
		if (cin.fail()) {
			cout << "No data processing - exiting" << endl;
		}
		
		// find average
		avg = sum / numInt;

		// find standard deviation
		distance = n - avg;
		if (distance < 0) {
		    distance *= (-1);
		}
		sumsquare = sumsquare + pow(distance, 2);
		
		stdDev = sqrt( (sumsquare / numInt));
		
	}
	cout << "n = " << numInt << ", ";
	cout << "average = " << avg << ", ";
	cout << "standard deviation = " << stdDev << endl;
	
/*
	cout << "sum " << sum << endl;
	cout << "n= " << numInt << endl;
	cout << "average " << avg << endl;
	cout << "sum of squares is " << sumsquare << endl;
	cout << "Standard deviation is " << stdDev << endl;
	*/

}
