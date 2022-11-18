// Calculating the labor charge and tax on part and supplies
// sitthiphol Yuwanaboon		
// section number 21955 -21956
// Lab 2C
#include<iostream>
#include<string>
#include<iomanip>
#include<ios>
using namespace std;
int main() 
{
	string name_Customer;
	const double labor_Charge = 35.00;
	const double tax_Part_Supplies = 0.09;
	
	double hours_Labor;
	double cost_Labor;
	double tax;
	double total_Amount;
	double part_Supplies;
	
	cout << "Customer name:  ";
	cin >>  name_Customer;
	cout << "Hours of labor:     ";
	cin >> hours_Labor;
	cost_Labor = hours_Labor * labor_Charge;
	cout << "Cost of labor:" << setw(11) << fixed << setprecision(2) << cost_Labor << endl;
	cout << "Parts and supplies: ";
	cin >> part_Supplies;
	tax = tax_Part_Supplies * part_Supplies;
	cout << "Tax: " << setw(20) << fixed << setprecision(2) << tax << endl;
	total_Amount = cost_Labor + part_Supplies + tax;
	cout << "Total Amount Due: " << setw(5) << fixed << setprecision(2) << total_Amount << endl;
	system("pause");
	return 0;
}
/*
Customer name:  sitthiphol
Hours of labor:     99.00
Cost of labor:    3465.00
Parts and supplies: 99.00
Tax:				 8.91
Total Amount Due: 3653.10
Press any key to continue . . .*/

