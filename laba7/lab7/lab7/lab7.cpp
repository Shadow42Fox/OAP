#include <iostream>
using namespace std;

int main()
{
//Задание 1
    setlocale(LC_CTYPE, "Russian");
    float a, d = 12.5e-4, h;
    int n = 5, sum, j;
    for (j = 1; j < 6; j++) {
        cout << "\nВведите a: "; //0.8 4 -7 2 0.91
        cin >> a;
        sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += a * a;
        }
        h = d + sum;
        cout << "\nh = " << h;
    }

//Задание 2
    int y, summ, z, max_x, mass_x[7] = { 1, 2, 7, 4, 7, 6, 10 },
        x2, x3, x4, x5, x6, x7;
    max_x = mass_x[0];
    for (int r = 0; r < 7; ++r) {
        if (mass_x[r] > max_x) {
            max_x = mass_x[r];
        }
    }
    summ = 0;
    for (int i = 1; i <= 5; i++) {
        summ += max_x * max_x;
    }
    cout << "\n\nЗадание 2;\n\nmax x = " << max_x;
    z = max_x;
    y = z * summ;
    cout << "\ny = " << y;

//Задание 1(вариант 10)
    float  h2, xx[3] = { 1, 2, 3 }, y3{}, d1 = 0, d2 = 0, d3 = 0;
    int aa = 1, bb = 3, ii, nn = 200, S = 0;
    for (ii = 0; ii < 3; ii++);
    if (xx[ii] <= 3)
        y3 = pow(2, 3) - 1;
    if (y3 == 0)
        d1 = y3;
    else if (y3 == 7)
        d2 = y3;
    else if (y3 == 26)
        d3 = y3;

    h2 = (bb - aa) / nn;
    S = 0.5 * h2 * (d1 + 2 * d2 + d3);
    cout << "\n\nЗадание 1 из варианта 10:\n";
    cout << "y = " << y3;
    cout << "S = " << S;
    cout << "h = " << h2;
    cout << "d1 = " << d1;
    cout << "d2 = " << d2;
    cout << "d3 = " << d3;

//Задание 2(вариант 10)
    double x1[5] = { 2, 1.7, 4.7, 6, 3 }, b[3] = { 0.4, 8, 15 }, y2 = 0, k1 = 0, s1 = 0, s2 = 0;
    int l, p1, s3;
    for (l = 0; l < 3; l++)
        for (p1 = 0; p1 < 5; p1++)
            s2 += x1[p1];
    if (s1 > b[l])
        s1 = b[l];
    s3 = l;
    y = b[p1] + s2;
    cout << "\n\nЗадание 2 из варианта 10:\n";
    cout << "y = " << y2;
    k1 = s3 + s2;
    cout << "\nk = " << k1;

 
//Доп 2
    int n1, c = 0, list[100]{};
    cout << "\n Введите количество элементов в массиве и их самих: ";
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        cin >> list[i];
    }

    for (int i = 0; i < n1; i++)
    {
        if (list[i] < 0)
        {
            c = i;
        }
    }
    cout << "Номер последнего отрицательного: " << c;




//Доп 1
    int* mas, k, sum1;
    sum1 = 0;
    cout << "\n\nВведите размер массива: ";
    cin >> k;
    mas = new int[k];
    for (int p = 0; p < k; p++)
    {
        cout << "mas[" << p << "]= ";
        cin >> mas[p];
    }
    for (int p = 0; p < k; p++)
    {
        if (mas[p] % 2 == 0) // проверка на четность
            sum1 += mas[p];
    }
    cout << "Сумма четных элементов массива равна " << sum1;
    cin.get(); cin.get();
    return 0;

}