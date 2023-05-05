#include <iostream>
#include <bitset>
using namespace std;

void task1_var1()
{
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];
    int A, k = 0;
    cout << "Введите число: "; cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "A = " << tmp << endl;

    A = A / 4;
    while (A != A / 26) {
        if (A % 2 == 0)
            k++;
        A = A / 2;
    }

    cout << "Количество нулей в числе равно: " << k << endl << endl;
}

	/*setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B = 33, n, p, m, q, x, y, maskA = 14, maskB;
	cout << "Первое число А = "; cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "A = " << tmp << endl;

	cout << "Введите с какой позиции будет сдвиг вправо: "; 
	cin >> p;
	cout << "\nВведите какое количество битов инвертируется: "; 
	cin >> n;*/
	/*x = A / (p * 2);
	y = pow(2, n);
	while (A >= x and A <= y) {
		for (int i = 0; ; i++) {
			if (x % 2 == 0)
				inv += '0';
			else
				inv += '1';
		}
	}
	maskA = atoi(inv.c_str());
	if (y != A / 2)
		for (int razn = 0; y < A; )

	maskB = ~maskA;*/
	/*maskA = int(tmp);*/
	/*maskA &= (tmp >> p);
	maskA &= (tmp << (p - n));
	cout << maskB;*/


void task2_var1() {
    unsigned int number_A, number_B;
    char number_A_binary[16];
    char number_B_binary[16];
    const unsigned int mask = 1 << 15;
    int n = 3, p = 6;
    int m = 3, q = 10;
    cout << "Введите число А: "; cin >> number_A;
    cout << "Введите число B: "; cin >> number_B;
    cout << "number A: ";
    for (int i = 0; i < 16; i++) {
        char bitChar = mask & number_A ? '1' : '0';
        number_A_binary[i] = bitChar;
        putchar(number_A_binary[i]);
        number_A <<= 1;
        if ((i + 1) % 8 == 0) putchar(' ');
    }
    cout << endl;
    cout << "number B: ";

    for (int i = 0; i < 16; i++) {
        char bitChar = mask & number_B ? '1' : '0';
        number_B_binary[i] = bitChar;
        putchar(number_B_binary[i]);
        number_B <<= 1;
        if ((i + 1) % 8 == 0) putchar(' ');
    }
    cout << endl;

    for (int i = 16 - p; i < 16 - p + n; i++) {
        number_A_binary[i] = number_A_binary[i] == '1' ? '0' : '1';
    }

    for (int i = 16 - q; i < 16 - q + m; i++) {
        number_B_binary[i] = number_B_binary[i] == '1' ? '0' : '1';
    }

    cout << "Число А с инвертируемыми битами: ";
    for (int i = 0; i < 16; i++) {
        cout << number_A_binary[i];
        if ((i + 1) % 8 == 0) putchar(' ');
    }

    cout << endl;

    cout << "Число B с инвертируемыми битами: ";
    for (int i = 0; i < 16; i++) {
        cout << number_B_binary[i];
        if ((i + 1) % 8 == 0) putchar(' ');
    }

    cout << endl;

}


int main()
{
    setlocale(LC_ALL, "Rus");
        
     task1_var1();
     task2_var1();
    return 0;
}


