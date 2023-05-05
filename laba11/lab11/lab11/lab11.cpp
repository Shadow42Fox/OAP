#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void variant1() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int N, m, M[100];
	cout << "Введите целое число: " << endl;
	cin >> N;
	cout << "Введите число, которое будем проверять на кратность: " << endl;
	cin >> m;
	cout << "Числа, кратные " << m << ": " << endl;
	for (int i = 1, f = 0; (m * i) <= N; i++, f++)
	{
		if (N % (m * i) == 0) {
			*(M + f) = m * i;
			cout << *(M + f) << "  ";
		}
	}
	const int n = 10;
	int A[n] = { 1, 59, 37, 74, 82, 99, 98, 69, 33, 23 };
	int B[n] = {/* 2, 5, 88, 66, 91, 95, 97, 48, 99, 54*/ 1, 59, 37, 74, 82, 99, 98, 69, 33, 28 };
	int max = 0;

	for (int i = 0; i < n;)
	{
		for (int k = 0; k < n;) {
			if (*(A + i) == *(B + k)) {
				i++;
				k++;
			}
			else
			{
				if (*(A + i) > max)
					max = *(A + i);
				i++;
				k++;
			}
		}
		cout << "\nМаксимальное число, которое не повторяется: " << max;
	}
}

	//Вариант 2
void variant2() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 10;
	int A[n] = { 1, 59, 37, 74, 82, 99, 98, 69, 33, 23 };
	int B[n] = { 2, 5, 88, 66, 91, 95, 97, 48, 99, 54 };
	int S[n];

	cout << "Сумма элементов 2х массивов равна: ";
	for (int k = 0; k < n; ++k)
	{
		S[k] = A[k] + B[k];
		cout << S[k] << "  ";
	}


	const int N = 10;
	int C[N] = { 3, 9, 8, 6, 5, 7, 9, 8, 5, 6 };

	int min = 0;
	for (int j = min + 1; j < N; j++)
		if (C[j] < C[min])
			min = j;

	int num = C[min] - 1;
	printf("\n\nНаименьшее натуральное число d = %d\n", num);
}


int* max_element(const int* array, const size_t count) {
	return (count < 2) ? (int*)array : max_element(array + (*array < *(array + count - 1)), count - 1);
}

int* find_element(const int* array, const size_t count, const int value) {
	return (count) ? (*array == value) ? (int*)array : find_element(array + 1, count - 1, value) : NULL;
}

void fill_array(int* array, const size_t count) {
	if (count) {
		*array = rand() % 100;
		fill_array(array + 1, count - 1);
	}
}

void dump_array(const int* array, const size_t count) {
	if (count) {
		printf("%d ", *array);
		dump_array(array + 1, count - 1);
	}
	else
		printf("\n");
}

#define A_SIZE (10)
#define B_SIZE (20)

int variant4(void)
{
	srand(time(NULL));
	const int N = 10;
	int x[10], i;

	for (i = 0; i < N; i++)
		printf("%4d", x[i] = rand() % 5);
	printf("\n");

	int count;
	int result = 0;
	int k;
	for (i = 0; i < N; i++)
	{
		for (count = k = 0; k <= i; k++)
			if (x[i] == x[k]) count++;
		if (count == 1)
		{
			result++;
			printf("%4d", x[i]);
		}
	}

	printf("\n\n%d unique numbers\n", result);
	return 0;
}




int main(void) {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;

	variant1();
	cout << endl << endl;


	variant2();
	cout << endl << endl;
	int a[A_SIZE], b[B_SIZE];


	srand(time(NULL));

	fill_array(a, A_SIZE);
	fill_array(b, B_SIZE);

	printf("Array A:\n");
	dump_array(a, A_SIZE);
	printf("Array B:\n");
	dump_array(b, B_SIZE);
	printf("Max. element from A %sfound in B\n", (find_element(b, B_SIZE, *max_element(a, A_SIZE))) ? "" : "not ");
	cout << endl;

	variant4();
	return 0;
}

