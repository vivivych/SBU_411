#include<iostream>
#include<FillRand.h>
#include<Print.h>
#include<Sort.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	double arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	cout << delimiter << endl;
	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

}