#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{ 
    setlocale(LC_CTYPE, "Russian");
    float a = 1.774, m = 5, x = 3, y, z;
    while(x < 5) {
        y = sqrt(a + pow(m,2) * pow(x, 2))/(a + x) * m;
        if (abs(y) < 1) {
            z = y + 1;
            cout << "\ny = " << y;
            cout << "\nz = " << z;
        }
        else {
            z = pow(sin(y), 2);
            cout << "\ny = " << y;
            cout << "\nz = " << z;
        }
        x = x + 0.2;
    }

    cout << "\n\nВывод чисел без повторяющихся символов:\n";
    for (int a = 1; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            for (int c = 0; c < 10; c++) {
                if (b != a and b != c and c != a) {
                    cout << a << b << c << " ";
                }
            }
        }
    }

    cout << "\n\nВозможные номера:\n";
    int n, sum;
    for (int i = 0; i < 10000; i++) {
        if (i % 2 == 0 && i % 7 == 0 && i % 11 == 0) {
            n = i;
            sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            if (sum == 30) {
                cout << i << endl;
            }
        }
    }


    float c1, c2;
    int i = 1;
    puts("Введите объем сосудов: ");
    cin >> c1;
    cin >> c2;
    while (i <= 6)
    {
        c1 /= 2;
        c2 += c1;
        c2 /= 2;
        c1 += c2;
        i++;
    }
    printf("Количество жидкости в сосудах после переливаний:\n %f\n%f", c1, c2);


    int T = 0, two = 0, five = 0, twelve = 0, fifty = 0, R = 100;
    for (two; two <= 2; two++) {
        for (five; five <= 5; five++) {
            for (twelve; twelve <= 20; twelve++) {
                for (fifty; fifty <= 50; fifty++) {
                    if (R = (a * 50 + five * 20 + twelve * 5 + fifty * 2))
                        T++;
                }
            }
        }
    }
    printf("Способов набора 1 рубля: %d", T);

}  
