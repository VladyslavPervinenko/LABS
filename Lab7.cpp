

#include <iostream>
using namespace std;

#define SUM(a, b) (a+b)
double Multiply(double a, double b) { return a * b; };
double Divide(double a, double b);
int main()
{
	double a, b;
	cin >> a;
	cin >> b;

	cout << "a + b = " << SUM(a, b) << endl;
	cout << "a * b = " << Multiply(a, b) << endl;
	cout << "a / b = " << Divide(a, b) << endl;
}


double Divide(double a, double b)
{
	if (b != 0) {
		return a / b;
	}
	else {
		return 0.0;
	}

}
