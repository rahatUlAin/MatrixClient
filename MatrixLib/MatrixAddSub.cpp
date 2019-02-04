#include<iostream>
//#include "stdafx.h"
using namespace std;
main()
{//code for matrix multiplication and subtraction
	int i, j, a, b, first[10][10], second[10][10], sum[10][10], subtract[10][10];
	cout << "Enter the number of rows and columns of matrix : " << endl;
	//enter rows and column
	// a===rows
	//b ==column
	cin >> a >> b;
	cout << "\nEnter the elements of first matrix : " << endl;
	for (i = 0; i<a; i++)
	{
		for (j = 0; j<b; j++)
		{
			cin >> first[i][j];
		}
	}
	cout << "Enter the elements of second matrix\n" << endl;
	for (i = 0; i< a; i++)
	{
		for (j = 0; j<b; j++)
		{
			cin >> second[i][j];
		}
	}
	for (i = 0; i< a; i++)
	{
		for (j = 0; j<b; j++)
		{//sum of first and second
			sum[i][j] = first[i][j] + second[i][j];
			//subtraction
			subtract[i][j] = first[i][j] - second[i][j];
			
		}
	}//calculate sum of entered matrics
	cout << "\nSum of entered matrices : " << endl;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			cout << sum[i][j] << "\t";
			cout << endl;
		}
	}//subtraction of entered matrices
	cout << "\nSubtraction of entered matrices : " << endl;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			cout << subtract[i][j] << "\t";
			cout << endl;
		}
	}
	 
	return 0;
}
