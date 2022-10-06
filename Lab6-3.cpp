//Lab6-3
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void) {
	double n;
	int numInt = 0;
	double sum = 0;
	double sumsquare = 0;
	double squaresum = 0;
	double avg = 0;
	double stdDev = 0;
	string str;
	int i;
	double numerator = 0;

	//Enter input values
	cout << "Enter numbers - Q to quit: ";
	
	while (true) {
	    cin >> n;
	    if (cin.fail()) break;
	    
	    numInt++;
		
		// find average
		sum += n;

		// find standard deviation
		sumsquare += pow(n, 2);
	}

	numerator = sumsquare -((sum * sum) / numInt);
	stdDev = sqrt(numerator / (numInt - 1));
	avg = sum / numInt;
	cout << "n = " << numInt << ", ";
	cout << "average = " << avg << ", ";
	cout << "standard deviation = " << stdDev << endl;

}
