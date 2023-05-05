#include <stdio.h>	
#include <stdlib.h>
#include <iostream>
#include <stdbool.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int max = 0, uwu = 0, mod_sum = 0;
	int neg[10];
	const int n = 10;
	int mass[n] = { 5, -6, 8, -1, 7, 0, 5, -5, -2, 2 };
	for (int i = 0, k = 0; i < n; i++)
	{
		if (mass[i] < 0)
		{
			neg[k] = mass[i];
			cout << neg[k];
			k++;
		}

	}
	cout << endl << endl;
	max = neg[0];
	for (int j = 0; j < n;)
	{
		if (neg[j] > max)
		{
			max = neg[j];
			uwu = j;
		}
		j++;
	}
	cout << max << endl << endl;
	for (int r = 0; r < uwu; r++)
	{
		mod_sum = mod_sum + abs(neg[r]);
	}
	cout << mod_sum;
}

	/*setlocale(LC_CTYPE, "Russian");
		const int n = 2, m = 4;
		int B[n][m];
		int i, j, k = 0, num = 0;
		cout << "Введите элементы массива" << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				cin >> B[i][j];
		cout << " Исходный массив:" << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "\n";
			for (int j = 0; j < m; j++)
				cout << "B[" << i << "," << j << "] =" << B[i][j] << "\t";
		}
		for (i = 0; i < n; i++) 
		{
			for (j = 0; j < m; j++) 
			{
				if (B[i][j] > 0)
				{
					k = j;
					if (B[i][k] > 0 && B[i+1][k] > 0)
					{
						cout << "B[" << i << "," << k - 1 << "] =";
						if (B[0][k - 1] > 0)
							cout << -B[0][k - 1] << endl;
						else
							cout << abs(B[0][k - 1]) << endl;
						

						cout << "B[" << i << "," << k - 1 << "] =";
						if (B[1][k - 1] > 0)
							cout << -B[1][k - 1] << endl;
						else
							cout << abs(B[1][k - 1]) << endl;
					}
					else {
						num = num + 1;
					}
				}
			}
		}
		if (num == 0)
			cout << "\n\nВсе значения в столбце " << k << " равны нулю(0)";
		else
			cout << "\n\nХотя бы одно значение в столбце " << k << " отлично от нуля(1)";*/
	

int task2(){
		int matrix[][4] =
		{ {-1, 12, 34, 23},
		  { 3, -5, -43, 21 },
		  { 1, -1, 1, 1 },
		  { 10, 11, 12, 13} };
		printf_s("Matrix\n");
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
				printf("%2d ", matrix[i][j]);
			printf("\n");
		}
		int column = -1;
		for (int j = 0; j < 4; j++)
		{
			bool flag = true;
			for (int i = 0; i < 4; i++)
				if (matrix[i][j] < 0) flag = false;
			if (flag)
			{
				column = j;
				if (j)
				{
					j = j - 1;
					for (int k = 0; k < 4; k++)
						matrix[k][j] *= -1;
				}
				break;
			}
		}
		printf("New matrix\n");
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
				printf("%2d ", matrix[i][j]);
			printf("\n");
		}

		printf("Number of column: %d", column);
		return 0;
}
//
//void main() {
//	setlocale(LC_CTYPE, "Russian");
//	cout << "Задание  1" << endl << endl;
//	cout << task1();
//}
