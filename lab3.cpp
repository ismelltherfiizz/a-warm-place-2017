// lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define n 5
using namespace std;

void sorting(int a[n][n]);//sorting function
void calc(int a[n][n]);//calculation function

int main()
{
	int i, j, k;

	int a[n][n];

	for (i = 0; i<n; i++)

	{

		for (j = 0; j<n; j++)

		{

			cout << "a[" << i + 1 << "][" << j + 1 << "]=";
			cin >> a[i][j];

		}

	}

	cout << "the original massive:" << endl;

	for (i = 0; i<n; i++)

	{

		for (j = 0; j < n; j++)
		{
			cout << "     " << a[i][j];
		}
		cout << endl;

	}

	sorting(a);

	cout << "the sorted massive:" << endl;

	for (i = 0; i<n; i++)

	{

		for (j = 0; j<n; j++)

		{

			cout << "     " << a[i][j];

		}

		cout << endl;

	}

	calc(a);

}

void sorting(int a[n][n])

{

	int i, j, k, c;

	for (j = 0; j<n; j++)

	{

		for (k = n - 1; k >= 0; k--)

		{

			for (i = 0; i<k; i++)

			{

				if (a[i][j]<a[i + 1][j])

				{

					c = a[i][j];

					a[i][j] = a[i + 1][j];

					a[i + 1][j] = c;

				}

			}

		}

	}

}

void calc(int a[n][n])

{

	int i, j;

	double f;
	double F = 0;

	for (i = 1; i<n; i++)

	{

		f = 1;

		for (j = n - i; j<n; j++)
		{	

			f = f * a[i][j];

		}
		F = F + f / (n - 1);
		cout << "f(" << i + 1 << ")=" << f << endl;
	}

	cout << "F=" << F << endl;

}