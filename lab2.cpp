// lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char choose;
	double x, y, a, b, h, d;
	cout << "Choose the variant 'a' or 'b':" << endl;
	cin >> choose;
	while (choose != 'a' && choose != 'b')
	{
		cout << "Please, choose the variant 'a' or 'b':" << endl;
		cin >> choose;
	} 
	switch (choose)
	{
	case 'a':
		a = 2;
		b = 3;
		h = 0.1;
		cout << "Enter the value between " << a << " and " << b << ":" << endl;
		cin >> x;
		while (x < a || x > b)
		{
			cout << "Please, enter the valid value:" << endl;
			cin >> x;
		}
		
		for (x; x <= b + 0.001; x += h)
		{
			if (x < 2.3)
			{
				y = cos(x) + tan(x);
			}
			else if (x < 2.7)
			{
				y = 1 / tan(x) + sin(x);
			}
			else
			{
				y = pow(x*log(x), 3);
			}
			cout << "y(" << x << ") = " << y << endl;
		}
			
			break;
		
	case 'b':
		a = 0.1;
		b = 1;
		h = 0.1;
		d = 0.001;
		int k = 0;
		double sum = 0;
		cout << "Enter the value between " << a << " and " << b << ":" << endl;
		cin >> x;
		while (x < a || x > b)
		{
			cout << "Please, enter the valid value:" << endl;
			cin >> x;
		}
		
		for (x; x <= b + 0.001; x += h)
		{

			do
			{
				y = ((x / (2 * k - 1)*(2 * k + 3))*cos(2 * k + 1));
				k++;
				sum += y;

			} while (fabs(y) >= d);
			cout << "x = " << x << " ; y = " << y << "; sum = " << sum << endl;
		}
			break;

		}
	}


