#include <iostream>

using namespace std;


void task1()
{
	setlocale(LC_CTYPE, "Russian");
	const int n = 2, m = 4;
	int B[n][m];
	int i, j, row = 0, column = 0;
	cout << "Введите элементы массива(8): " << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> B[i][j];
		}
	}
	int max = B[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (max < B[i][j])
			{
				max = B[i][j];
				column = i;
				row = j;
			}
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < m; j++)
			cout << "B[" << i << "," << j << "] =" << B[i][j] << "\t";
	}
	cout << endl;
	cout << "Максимальный элемент B[" << column << "," << row << "] =" << max << endl;
}

void task2() {
	setlocale(LC_CTYPE, "Russian");
	const int n = 2, m = 4;
	int B[n][m];
	int i, j, k, num = 0;
	cout << "Введите k = ";
	cin >> k;
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
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if ((k - 1) == j) {
				if (B[i][j] != 0) {
					num = num + 1;
				}
				else {
					num = num + 0;
				}
			}
		}
	}
	if (num == 0)
		cout << "\n\nВсе значения в столбце " << k << " равны нулю(0)";
	else
		cout << "\n\nХотя бы одно значение в столбце " << k << " отлично от нуля(1)";
}
void dop2() {
	const int n = 5;
	int sq[n][n];
	for (int i = 0; i < n; i++)//заполнение массива с заданным свойством
	{
		int a = i + 1;
		for (int j = 0; j < n; j++)
		{
			sq[i][j] = a;
			a++;
			if (a > n) a = 1;
		}
	}
	for (int i = 0; i < n; i++)//вывод
	{
		for (int j = 0; j < n; j++)
			cout << sq[i][j] << ' ';
		cout << endl;
	}
}


void main() {
	setlocale(LC_CTYPE, "Russian");
	cout << "Задание 1" << endl << endl;
	task1();
	cout << "\n\nЗадание 2" << endl << endl;
	task2();
	cout << "\n\nДоп 2" << endl << endl;
	dop2();
}
