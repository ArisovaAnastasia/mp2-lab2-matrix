﻿// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы


#include <iostream>
#include "utmatrix.h"

//---------------------------------------------------------------------------

void main()
{
	int i, j, n, k, t, t1, r;
	int f;
	setlocale(LC_ALL, "Russian");
	cout << "Тестирование программ поддержки представления треугольных матриц" << endl;
	char *M[] = { "1 - Ввести матрицу вручную","2 - Сформировать матрицу из случайных чисел","3 - Выход из программы" };
	char *M1[] = { "1 - Сложение матриц","2 - Вычитание матриц","3 - Равенство матриц" };
	do
	{
		cout << "Введите размеры матриц n=" << endl;
		cin >> n;

		TMatrix<int> A(n), B(n), C(n);
		TMatrix<int> ADD(n), SUB(n);
		cout << "Выберите способ формирования матриц А и В:" << endl << endl;
		for (i = 0; i < 3; i++)
			cout << M[i] << endl;
		cin >> t;
		if (t == 3)
			break;
		if (t == 1)
		{
			cout << "Введите матрицу А=" << endl;
			cin >> A;
			cout << "Введите матрицу В=" << endl;
			cin >> B;
		}
		if (t == 2)
		{
			for (i = 0; i < n; i++)
				for (j = i; j < n; j++)
				{
					A[i][j] = rand();
					B[i][j] = rand();
				}
		}
		if (t > 3)
			cout << "Такого пункта меню не существует, повторите ввод!" << endl;
		else 
		{
			cout << "Матрица А=" << endl << A << endl;
			cout << "Матрица B=" << endl << B << endl;
		}
		cout << "Выберите нужное действие:" << endl << endl;
		for (i = 0; i < 3; i++)
			cout << M1[i] << endl;
		cin >> r;
		if ((r == 1) && (t<3))
		{
			ADD = A + B;
			cout << "A+B=" << endl << ADD << endl;
		}
		if (r == 2)
		{
			SUB = A - B;
			cout << "A-B=" << endl << SUB << endl;
		}
		if ((r == 3) && (t<3))
		{
			if (A == B)
				cout << "A=B";
			else cout << "A!=B";
			cout << endl << endl;
		}
		if ((r > 3) && (t<3))
			cout << "Такого пункта меню не существует, повторите ввод!" << endl;
			

	}while (t < 3);

	system("pause");
}