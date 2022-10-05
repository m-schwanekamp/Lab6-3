//Lab6-3
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
	double n;
	int numInt = 0;
	double sum = 0;
	double sumpos = 0;
	double sumneg = 0;
	double sumsquare;
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

		if (n > avg) {
			sumpos = pow((n - avg), 2);
		}
		if (n < avg) {
			sumneg = pow((avg - n), 2);
		}
		sumsquare = sumneg + sumpos;
		stdDev = sqrt((sumsquare / numInt));
	}

	
	


	cout << "sum " << sum << endl;
	cout << "n= " << numInt << endl;
	cout << "average " << avg << endl;
	cout << "sum of squares is " << sumsquare << endl;
	cout << "standard deviation is " << stdDev << endl;
}