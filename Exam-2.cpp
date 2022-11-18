// sitthiphol Yuwanaboon
//sturlaProblem4
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double Volume;
	double R;
	const double pi = 3.14159265;

	cout << "what is your Radius: ";
	cin >> R;
	Volume = pow(R, 3) * 4 * (pi) / 3;
	cout << "The volume is: " << Volume << endl;
	system("pause");
	return 0;
}
/*what is your Radius: 5
The volume is: 523.599
Press any key to continue . . .
*/
