#include <iostream>
using namespace std;
int main()
{
	double x;
	double y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	double z1 = cos(x) * cos(x) * cos(x) * cos(x) + sin(y) * sin(y) + 1.0 / 4 * sin(2 * x) * sin(2 * x) - 1;
	double z2 = sin(y + x) * sin(y - x);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get(); cin.get();
	return 0;
}