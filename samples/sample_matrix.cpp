// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������


#include <iostream>
#include "utmatrix.h"

//---------------------------------------------------------------------------

void main()
{
	int i, j, n, k, t, t1;
	int f;
	setlocale(LC_ALL, "Russian");
	cout << "������������ �������� ��������� ������������� ����������� ������" << endl;
	char *M[] = { "1 - ������ ������� �������","2 - ������������ ������� �� ��������� �����","3 - ����� �� ���������" };
	do
	{
		cout << "������� ������� ������ n=" << endl;
		cin >> n;
		TMatrix<int> A(n), B(n), C(n);
		TMatrix<int> ADD(n), SUB(n);
		cout << "�������� ������ ������������ ������ � � �:" << endl << endl;
		for (i = 0; i < 3; i++)
			cout << M[i] << endl;
		cin >> t;
		if (t > 3)
			cout << "������ ������ ���� �� ����������, ��������� ����!" << endl;
		if (t == 1)
		{
			cout << "������� ������� �=" << endl;
			cin >> A;
			cout << "������� ������� �=" << endl;
			cin >> B;
		}
		if (t == 2)
		{
			for (i = 0; i < 5; i++)
				for (j = i; j < 5; j++)
				{
					A[i][j] = rand();
					B[i][j] = rand();
				}
		}

		if (t != 3)
		{
			cout << "������� �=" << endl << A << endl;
			cout << "������� B=" << endl << B << endl;

			ADD = A + B;
			cout << "A+B=" << endl << ADD << endl;

			SUB = A - B;
			cout << "A-B=" << endl << SUB << endl;

			if (A == B)
				cout << "A=B";
			else cout << "A!=B";
			cout << endl << endl;
		}

	} while (t < 3);

	system("pause");
}