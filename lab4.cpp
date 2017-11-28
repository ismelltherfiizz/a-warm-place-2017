// lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define ArraySize 5
using namespace std;


class Matrix
{
private:
	double MatrixMassive[ArraySize][ArraySize];
public:
	void ReadFromConsole();
	void PrintToConsole();
	void InsertionSort();
	void SumAndMeanCalculations();
};


void Matrix::ReadFromConsole()
{
	for (int RowCounter = 0; RowCounter < ArraySize; RowCounter++)
		for (int ColumnCounter = 0; ColumnCounter < ArraySize; ColumnCounter++)
		{
			cout << "[" << RowCounter + 1 << "][" << ColumnCounter + 1 << "] = ";
			cin >> MatrixMassive[RowCounter][ColumnCounter];
		}
}
void Matrix::PrintToConsole()
{
	for (int RowCounter = 0; RowCounter < ArraySize; RowCounter++)
	{
		for (int ColumnCounter = 0; ColumnCounter < ArraySize; ColumnCounter++)
			cout << MatrixMassive[RowCounter][ColumnCounter] << "    ";
		cout << endl;
	}
}
void Matrix::InsertionSort()

{
	int NewElement, Location;
	for (int ColumnCounter = 0; ColumnCounter < ArraySize; ColumnCounter++) {
		for (int RowCounter = 1; RowCounter < ArraySize; RowCounter++) {
			Location = RowCounter;
			NewElement = MatrixMassive[RowCounter][ColumnCounter];
			for (int Key = 0; Key < RowCounter; Key++)
				if (NewElement < MatrixMassive[Key][ColumnCounter]) {
					Location = Key;
					break;
				}
			for (int Key = RowCounter; Key >= Location + 1; Key--)
				MatrixMassive[Key][ColumnCounter] = MatrixMassive[Key - 1][ColumnCounter];
			MatrixMassive[Location][ColumnCounter] = NewElement;

		}
	}


}

void Matrix::SumAndMeanCalculations()

{

	int RowCounter, ColumnCounter;

	double ElementsSumUnderMainDiagonal;
	double GeometricMean = 0;
	double GeometricMeanProduct = 1;
	for (ColumnCounter = 0; ColumnCounter < ArraySize; ColumnCounter++)

	{

		ElementsSumUnderMainDiagonal = 0;

		for (RowCounter = 1; RowCounter < ArraySize; RowCounter++)
		{
			if (RowCounter > ColumnCounter)
			ElementsSumUnderMainDiagonal = ElementsSumUnderMainDiagonal + MatrixMassive[RowCounter][ColumnCounter];

		}

		GeometricMeanProduct = GeometricMeanProduct * ElementsSumUnderMainDiagonal;
		GeometricMean = pow(GeometricMeanProduct, 1.0 / (ArraySize - 1));
		cout << "f(" << RowCounter + 1 << ")=" << ElementsSumUnderMainDiagonal << endl;
	}

	cout << "F=" << GeometricMean << endl;

}
void _tmain(void)
{
	Matrix A;
	cout << "Input the elements of the matrix:	" << endl;
	A.ReadFromConsole();
	cout << "The original matrix" << endl;
	A.PrintToConsole();
	A.InsertionSort();
	cout << "The sorted matrix " << endl;
	A.PrintToConsole();
	A.SumAndMeanCalculations();

}