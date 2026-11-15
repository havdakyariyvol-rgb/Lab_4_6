#include <iostream>
#include <iomanip>
#include <math.h>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	double S = 0, P = 1;
	cout << "Спосіб 1 (while): " << endl;
	int i = 1, k;
	while (i <= 15)
	{
		k = 1;
		P = 1;
		while (k <= i)
		{
			P *= sqrt(1. * k);
			k++;
		}
		S += (sin(10. * i) + cos(10. * i)) / P;
		i++;
	}
	cout << "S = " << fixed << setprecision(4) << S << endl;

	cout << "Спосіб 2 (do-while): " << endl;
	S = 0;
	i = 1;
	do
	{
		k = 1;
		P = 1;
		do
		{
			P *= sqrt(1. * k);
			k++;
		} while (k <= i);
		S += (sin(10. * i) + cos(10. * i)) / P;
		i++;
	} while (i <= 15);
	cout << "S = " << fixed << setprecision(4) << S << endl;

	cout << "Спосіб 3 (for++): " << endl;
	S = 0;
	for (i = 1; i <= 15; i++)
	{
		P = 1;
		for (k = 1; k <= i; k++)
		{
			P *= sqrt(1. * k);
		}
		S += (sin(10. * i) + cos(10. * i)) / P;
	}
	cout << "S = " << fixed << setprecision(4) << S << endl;

	cout << "Спосіб 4 (for--): " << endl;
	S = 0;
	for (i = 15; i >= 1; i--)
	{
		P = 1;
		for (k = i; k >= 1; k--)
		{
			P *= sqrt(1. * k);
		}
		S += (sin(10. * i) + cos(10. * i)) / P;
	}
	cout << "S = " << fixed << setprecision(4) << S << endl;

	return 0;
}