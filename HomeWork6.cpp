﻿#include <iostream>
using namespace std;



int task1(int array[], const int size)
{
	int min = array[0];
	
	
	for (int i = 0; i < size; i++)
	{
		if (array[i] > min)
		{
			
	
			array[i] = min;
		}

		
	}

	return   min;
	
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

	//cout << min;
	
	//cout << task1;

	


}








//1.  Напишите программу, которая находит максимальный элемент в массиве.
// Программа должна запрашивать ввод значений элементов массива с клавиатуры(10 целочисленных элементов, каждый вводится в отдельной строке).
// Программа должна вывести значение наибольшего элемента.
// Поиск наибольшего элемента оформите в виде функции, которая возвращает значение наибольшего элемента, а в качестве параметра получает массив










//2.  Напишите программу, которая находит среднее арифметическое элементов  массива.
// Программа должна запрашивать ввод значений элементов массива с клавиатуры(10 целочисленных элементов, каждый вводится в отдельной строке).
// Программа должна вывести значение среднего арифметического значения элементов в формате 5 знаков под всё число и 1 знака под дробную часть.
// Поиск среднего арифметического оформите в виде функции, которая возвращает искомое значение, а в качестве параметра получает массив.









//3.  Напишите программу, которая вычисляет количество элементов массива, бо́льших, чем среднее арифметическое всех элементов массива.
// Программа должна запрашивать ввод значений элементов массива с клавиатуры(10 целочисленных элементов, каждый вводится в отдельной строке).
// Программа должна вывести количество элементов массива, бо́льших значения среднего арифметического всех элементов.
// Подсчет количества элементов оформите в виде функции, которая возвращает искомое количество, а в качестве параметра получает массив
// .Поиск среднего арифметического оформите в виде функции, которая возвращает искомое значение, а в качестве параметра получает массив.







