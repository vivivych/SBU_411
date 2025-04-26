#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);	//Заполняет массив случайными числами
void FillRand(char arr[], const int n);	//Заполняет массив случайными числами
void FillRand(float arr[], const int n);	//Заполняет массив случайными числами
void FillRand(double arr[], const int n);	//Заполняет массив случайными числами

template<typename T>void Print(T arr[], const int n);
template<typename T>void Sort(T arr[], const int n);
template<typename T>T Sum(T arr[], const int n);
template<typename T>double Avg(T arr[], const int n);
template<typename T>T MinValueIn(T arr[], const int n);
template<typename T>T MaxValueIn(T arr[], const int n);
template<typename T>void ShiftLeft(T arr[], const int n, const int shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	float arr[n];

	FillRand(arr, n);	//Заполнение массива случайными числами:
	Print(arr, n);		//Вывод исходного массива на экран:
	Sort(arr, n);		//Сортировка массива:
	Print(arr, n);		//Вывод отсортированного массива на экран:
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;

	const int SIZE = 8;
	char brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << endl;

	/*Print(brr, SIZE);
	int shifts;
	cout << "Введите количество сдвигов: "; cin >> shifts;
	ShiftLeft(brr, SIZE, shifts);
	Print(brr, SIZE);*/
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100; //функция возвращает псевдослучайное число в диапозоне от 0 до 32676
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand(); //функция возвращает псевдослучайное число в диапозоне от 0 до 32676
	}
}

void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000; //функция возвращает псевдослучайное число в диапозоне от 0 до 32676
		arr[i] /= 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000; //функция возвращает псевдослучайное число в диапозоне от 0 до 32676
		arr[i] /= 100;
	}
}


template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>void ShiftLeft(T arr[], const int n, const int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}