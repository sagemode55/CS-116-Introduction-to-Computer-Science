//sittihphol Yuwanaboon
//final 3
#include<ios>
#include<iostream>
#include<fstream>
#include<cmath>
double aveRage(int arrr[], int Numarray) {
	double average = 0.0;
	

	for (int i = 0; i < Numarray; ++i) {
		average += arrr[i];
	}
	average /= Numarray;
	return average;
}

int MinVal(int arrr[], int Numarray) {
	int min = arrr[0];

	for (int i = 0; i < Numarray; ++i) {
		if (arrr[i] < min) {
			min = arrr[i];
		}
	}
	return min;
}
using namespace std;

int main() {
	const int NUM = 50;
	ifstream inFile;
	int arrayNum[NUM];
	inFile.open("File+For+Final.Txt");
	if (!inFile.is_open()) {
		cout << "the file are not opened." << endl;
	}
	else {
		cout << "the file are successfully opened" << endl;
	}

	int i;
	for (i = 0; i < NUM; i++) {
		inFile >> arrayNum[i];
	}
	inFile.close();
	cout << " the average of the value is:  " << aveRage(arrayNum, 50) << endl;
	cout << "the minimun of the value is:  " << MinVal(arrayNum, 50) << endl;


	cout << "Thank you very much " << endl;

	system("pause");
	return 0;
}
