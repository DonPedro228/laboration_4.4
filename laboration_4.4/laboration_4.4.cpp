#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double x, y, R, k, xp, xk, dx;
	cout << "R = "; cin >> R;       //xp = -R - 4;
	cout << "xp = "; cin >> xp;     //xk = 6;
	cout << "xk = "; cin >> xk;     //dx = 0.1;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "         Title             " << endl;
	cout << "___________________________" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	k = 1;
	while (x <= xk) {
		if (x <= R)
			y = -((x + 4) / (R + 4));
		else
			if (R <= x && x < 0)
				y = sqrt(R * R - x * x);
			else
				if (0 < x && x <= 6)
					y = ((6 * R) - (6 * R * x)) / 6;
				else
					y = k * x - 6;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}



