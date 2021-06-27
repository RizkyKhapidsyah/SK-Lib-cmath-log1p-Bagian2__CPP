// CPP program to illustrate log1p()
#include <cmath>
#include <iostream>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 
*/

using namespace std;

int main() {
	double x = 50.35, answer;

	// returns logarithm of 51.35 base e
	answer = log1p(x);
	cout << "log1p(" << x << ") = " << answer << endl;

	_getch();
	return 0;
}
