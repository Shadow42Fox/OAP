#include <iostream>
using namespace std;

void main()
{
//	//первое задание
	setlocale(LC_CTYPE, "Russian");
//	float c = 2.1, r = 4e-4, m = 7, j0[3] = { 4.2, 0.3, 1.7 }, j, h, y;
//	cout << "Первое задание:\n\n";
//
//	for (int n = 0; n < 3;)
//	{
//		j = j0[n];
//		h = (10*r - j)/(pow(c,2) + exp(-m));
//		y = (h*m - pow(j,2)) + pow((0.1*c),2);
//		printf("h = %5.2f\t", h);
//		printf("y = %5.2f\n", y);
//		n++;
//	}
//	//второе задание
//
//	float a = 2.1, t = 4e-4, n = 7, z, f, x = 0;
//	cout << "\nВторое задание:\n\n";
//
//	while (x < 1.7)
//	{
//		z = (10 * t - x) / (pow(a, 2) + exp(-n));
//		f = (z * n - pow(x, 2)) + pow((0.1 * a), 2);
//		cout << "z=" << z << "\t";
//		cout << " f=" << f << endl;
//		x = x + 0.1;
//	}
//	//третье задание
//
//	double k, mn, p0[4] = {9, 1.8, 15, -3}, p;
//	cout << "\nТретье задание:\n\n";
//
//	for (int k = 0; k < 4;)
//	{
//		p = p0[k];
//		for (mn = 1; mn <= 2; mn = mn + 0.5)
//			h = (10 * r - p) / (pow(c, 2) + exp(-m));
//			y = (h * m - pow(p, 2)) + pow((0.1 * c), 2);
//			printf("h = %5.2f\t", h);
//			printf("y = %5.2f\n", y);
//			k++;
//	}


	float p, q, k, n = 0;
	cout << "Введите выручку за товары в первый день: ";
	cin >> p;
	cout << "Введите конечную выручку: ";
	cin >> q;
	k = p / 100 * 3;
	while (p < q) {
		p = p + k;
		n = n + 1;
	}
	cout << "Через " << n << " дней фирма превысит " << q;


	//int n, s0, s1, p, float s2 = 0;
	//cout << "Введите количество лет: ";
	//cin >> n;
	//cout << "Введите процент уценки: ";
	//cin >> p;
	//for (int i = 1; i <= n; s2 = 0) {
	//	cout << "Введите стоимость оборудования за " << i << " год: ";
	//	cin >> s0;
	//	s1 = s0 / 100 * p;
	//	s2 = s2 + s1;
	//	i = i + 1;
	//	cout << "Общая стоимость за все года составляет: " << s2;
	//}
}

