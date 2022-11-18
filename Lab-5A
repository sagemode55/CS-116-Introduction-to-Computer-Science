//sitthiphol Yuwanaboon
//Lab 5A
//section number 21955-21956
#include <iostream>
#include<ios>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ifstream inFile;
	ofstream outFile;
	int const NUMS = 56;
	int dataFile[NUMS];

	inFile.open("Lab+#5A+Data+File.txt");

	if (!inFile.is_open()) {
		cout << " A File could not open successfully." << endl;
		return 1;
	}
	else {
		cout << "File are reached successfully." << endl; 
	}

	for (int i = 0; i < NUMS; i++) {
		inFile >> dataFile[i];
	}

	inFile.close();
	cout << endl;
	// declare the double and intege
	int MAXNUM = dataFile[0];
	int	MINNUM = dataFile[0];
	int	arraySum = 0;
	double subAvg, squaDiff;
	double diffTotal = 0;
	double arrayDev; 
	double arrayMedian;

	for (int i = 0; i < NUMS; i++) {
		arraySum = arraySum + dataFile[i];

		if (dataFile[i] > MAXNUM) {// this is the maximum value of the array
			MAXNUM = dataFile[i]; 
		}
		if (dataFile[i] < MINNUM) {
			MINNUM = dataFile[i]; // this is the minimum value of the array
		}
	}

	int arrayAvg = arraySum / NUMS;

	for (int i = 0; i < NUMS; i++) {
		subAvg = dataFile[i] - arrayAvg; // finding  average between each integer
		squaDiff = pow(subAvg, 2); // finding difference of squares between each integer
		diffTotal = diffTotal + squaDiff; // difference total after loop to find deviation
	}

	arrayDev = sqrt(diffTotal / NUMS); // finding the deviation 
	int tempVal;

	for (int i = 0; i < NUMS; i++) { 
		for (int k = 0; k < NUMS - 1 - i; k++) {
			if (dataFile[k] < dataFile[k + 1]) {
				tempVal = dataFile[k];
				dataFile[k] = dataFile[k + 1];
				dataFile[k + 1] = tempVal;
			}

		}
	}

	
	outFile.open("yuwanaboon5A.txt");
	for (int i = 0; i < NUMS; i++) {
		cout << setw(3) << dataFile[i] << " ";
		outFile << setw(3) << dataFile[i] << " ";
		if (i % 7 == 6) {
			cout << endl;
			outFile << endl;
		}
	}
	arrayMedian = (dataFile[(NUMS / 2) - 1] + dataFile[NUMS / 2]) / 2.0;
	

	cout << endl << endl; // endline for spacing
	
	cout << "Array Sum: " << arraySum << endl;
	cout << "Average of the sum: " << arrayAvg << endl;
	cout << "Minimum: " << MINNUM << endl;
	cout << "Maximum: " << MAXNUM << endl;
	cout << "Variance: " << arrayDev << endl;
	cout << "Median: " << arrayMedian << endl;
	
	outFile << endl << endl;
	outFile << "Array Sum: " << arraySum << endl;
	outFile << "Average of the sum: " << arrayAvg << endl;
	outFile << "Minimum: " << MINNUM << endl;
	outFile << "Maximum: " << MAXNUM << endl;
	outFile << "Variance: " << arrayDev << endl;
	outFile << "Median: " << arrayMedian << endl;

	outFile.close();
	
	system("pause");
	return 0;
}
