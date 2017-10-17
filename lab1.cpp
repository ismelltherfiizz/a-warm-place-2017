


#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	double x = 0; 
	double y = 0; 


	cout << "Enter x : "; 
	cin >> x;
	cout << "Enter y : "; 
	cin >> y;

	double result = log(pow(x,2)+4*x*y+pow(y,2)) - 12*cos(x*pow(y,4))+13*pow(x,6);
	cout << "result = " << result << endl;

	
}

