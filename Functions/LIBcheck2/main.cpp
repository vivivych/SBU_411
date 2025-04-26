#include<iostream>
#include<FillRand.h>
#include<TemplatedArrayFunctions.h>
using namespace std;

void main()
{
	//https://stackoverflow.com/questions/15079578/template-static-library-with-template-instantiation
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
}