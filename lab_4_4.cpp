#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	do
	{
		if (x <= -7)
			y = 0;

		if (-7 < x && x <= -3)
			y = x + 7;
		if (-3 < x && x <= -2)
			y = 4;
		if (-2 < x && x <= 2)
			y = x * x;
		if (2 < x && x <= 4)
			y = 8 - 2 * x;
		if (x >= 4)
			y = 0;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	} while (x <= xk);
	cout << "---------------------------" << endl;
	return 0;
}