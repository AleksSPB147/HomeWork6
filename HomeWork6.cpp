﻿#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;
double average = 0;

//
 int task1(int array[], const int size);
 int task2(int array[], const int size);
 int task3_1(int array[], const int size);
 int task3_2(int arr[], const int size);
 int count = 0;
 double average2 = 0;

int main()
{
	
	
	setlocale(LC_ALL, "RU");
	const int SIZE = 5;
	int array[SIZE];
	
	
	cout <<"Введите число: ";
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "\\" << SIZE << " : ";
		cin >> array[i];
	}

	//**************************   Для проверки раскомментировать *********************************
	cout << endl;
			//cout<<"Максимальный элемент массива: " << task1(array, SIZE);    // Для 1-го задания
	cout << endl;
					 //task2(array, SIZE);
					 //printf("Среднее арифмитическое значение элементов массива:  % 05.1lf\n", average2);  // В стиле С# Для 2 -го задания
					 //cout << setw(5) << average2 << endl;                              //C++     Для 2 -го задания
					 //cout.precision(1);                                                //C++     Для 2 -го задания
					 //cout << setprecision(1) << setfill('0') << fixed << internal;     //C++     Для 2 -го задания   
					 
					 
					 
	cout << endl;
									//task3_1(array, SIZE);   //Для 3-го задания
									//cout<< "Количество элементов массива, больших, чем среднее арифметическое: " << task3_2(array, SIZE);     //Для 3-го задания
	cout << endl;
}


int main()
{
	
	
	setlocale(LC_ALL, "RU");
	const int SIZE = 4;
	int array[SIZE];
	int min = 0;
	cout <<"Введите число: ";
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "\\" << SIZE << " : ";
		cin >> array[i];
	}
	int task1(int array[], const int size);

	////cout << array[1];
	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i];
		cout << " ";
	}
	cout << endl;
	cout << task1;
	
	/*for (int i = 0; i < SIZE; i++)
	{
		cout << min;
	}*/

//1.  Напишите программу, которая находит максимальный элемент в массиве.Это %04d
// Программа должна запрашивать ввод значений элементов массива с клавиатуры(10 целочисленных элементов,
// каждый вводится в отдельной строке).
// Программа должна вывести значение наибольшего элемента.
// Поиск наибольшего элемента оформите в виде функции, которая возвращает значение наибольшего элемента, 
//а в качестве параметра получает массив

int task1(int array[], const int size)
{
	int max = array[0];
	int tmp;
	
	for (int i = 0; i < size; i++)
	{
		if (max < array[i])
		{
			tmp = array[i];
			max = array[i];
			array[i] = tmp;
		}

	}
	return   max;

}








//2.  Напишите программу, которая находит среднее арифметическое элементов  массива.
// Программа должна запрашивать ввод значений элементов массива с клавиатуры(10 целочисленных элементов, каждый вводится в отдельной строке).
// Программа должна вывести значение среднего арифметического значения элементов в формате 5 знаков под всё число и 1 знака под дробную часть.
// Поиск среднего арифметического оформите в виде функции, которая возвращает искомое значение, а в качестве параметра получает массив.

int task2(int arr[], const int size)
{
	
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i] ;

	}
	average2 = double(sum) / size;
	return  average2;
}



//3.  Напишите программу, которая вычисляет количество элементов массива, бо́льших, чем среднее арифметическое всех элементов массива.
// Программа должна запрашивать ввод значений элементов массива с клавиатуры(10 целочисленных элементов, каждый вводится в отдельной строке).
// Программа должна вывести количество элементов массива, бо́льших значения среднего арифметического всех элементов.
// Подсчет количества элементов оформите в виде функции, которая возвращает искомое количество, а в качестве параметра получает массив
// .Поиск среднего арифметического оформите в виде функции, которая возвращает искомое значение, а в качестве параметра получает массив.

int task3_1(int arr[], const int size)
{
	
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
		
		
    }
	   average = double(sum) / size;
  return average;

}


int task3_2(int arr[], const int size)
{
	cout<< "Среднее арифмитическое: " << average  << endl;
	cout << endl;
	
	int count = 0;
for(int i = 0;i < size;i++)
	if (average < arr[i])
	{
		count++;
	}     
 return count;
	 
}













