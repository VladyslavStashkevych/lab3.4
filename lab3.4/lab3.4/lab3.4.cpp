#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, R; // Вхідні параметри

	// Вводимо значення a, b та R
	cout << "Enter x: "; cin >> x;
	cout << "\nEnter y: "; cin >> y;
	cout << "\nEnter R: "; cin >> R;

	// Розгалуження в повній формі
	if ((y <= 0 && x <= 0 && y >= -x - 2 * R) ||
		(y >= 0 && x >= 0 && y >= sqrt(R * R - x * x) && y >= 2 * R && x >= 2 * R))
		 cout << "\nYES\n";
	else cout << "\nNO\n";

	system("pause");
	return 0;
}