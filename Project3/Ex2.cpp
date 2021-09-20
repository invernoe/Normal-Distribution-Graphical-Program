#include <iostream>
#include <math.h>
#define pi 3.1415926
#define euler 2.7182818
using namespace std;

double gaussian(double x, double mean, double sig) {

	double power = -0.5 * pow(((x - mean) / sig), 2);

	return (1 / (sig * sqrt(2 * pi))) * pow(euler, power);

}


void main() {

	double xMax = 0, xMin = 0, step = 0, mu, sdev;
	cout << "Enter mean of gaussian :\n";
	cin >> mu;
	cout << "Enter standard deviation of gaussian :\n";
	cin >> sdev;
	cout << "Enter min value, max value and the step :\n";
	cin >> xMin;
	cin >> xMax;
	cin >> step;

	for (double i = xMin; i <= xMax; i += step) {
		int nstars = 20;
		double k = gaussian(i, mu, sdev);
		double maxVal = gaussian(mu, mu, sdev);

		cout << "gauss(" << i << ") = " << k << "\t";
		for (int j = 0; j < (k / maxVal) * nstars; j++)
			cout << "*";
		cout << endl;
	}

	system("pause");
}