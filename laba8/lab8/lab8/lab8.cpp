#include <iostream>
using namespace std;


int method_trap()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 1, b = 3, h, S, x, fx, fn;

    h = (b - a) / n;
    x = a;
    S = 0;

    do {
        fx = pow(x, 3) - 3;
        fn = pow(x + h, 3) - 3;
        S = S + h * (fx + fn) / 2;
        x = x + h;
    } while (x <= b - h);

    cout << S;
    return S;
}

int method_parab() 
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 1, b = 3, h, S1, S2, x, i, fx, fa, fb, fn, S_trap;

    h = (b - a) / (2 * n);
    x = a + 2 * h;
    S1 = 0;
    S2 = 0;
    i = 1;
    fa = pow(a, 3) - 3;
    fb = pow(b, 3) - 3;

    do {
        fx = pow(x, 3) - 3;
        S2 = S2 + fx; x = x + h;
        S1 = S1 + fx;
        x = x + h;
        i = i + 1;
        fn = pow(a + h, 3) - 3;
    } while (i >= n);
    S_trap = h / 3 * (fa + 4 * fn) + 4 * S1 + 2 * S2 + fb;

    cout << S_trap;
    return S_trap;
}


int method_dihotom()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 1, b = 3, e = 0.0001, x, fx, fa;

    do {
        x = (a + b) / 2;
        fa = pow(a, 3) + a - 3;
        fx = pow(x, 3) + x - 3;
        if (fx * fa <= 0)
            b = x;
        else
            x = a * (-1);

    } while (abs(a - b) <= 2 * e);

    cout << x;
    return x;
}




int method_trap2()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 0, b = 3, h, S, x, fx, fn;

    h = (b - a) / n;
    x = a;
    S = 0;

    do {
        fx = pow(x, 3) - 1;
        fn = pow(x + h, 3) - 1;
        S = S + h * (fx + fn) / 2;
        x = x + h;
    } while (x <= b - h);

    cout << S;
    return S;
}

int method_parab2()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 0, b = 3, h, S1, S2, x, i, fx, fa, fb, fn, S_trap;

    h = (b - a) / (2 * n);
    x = a + 2 * h;
    S1 = 0;
    S2 = 0;
    i = 1;
    fa = pow(a, 3) - 3;
    fb = pow(b, 3) - 3;

    do {
        fx = pow(x, 3) - 1;
        S2 = S2 + fx; x = x + h;
        S1 = S1 + fx;
        x = x + h;
        i = i + 1;
        fn = pow(a + h, 3) - 3;
    } while (i >= n);
    S_trap = h / 3 * (fa + 4 * fn) + 4 * S1 + 2 * S2 + fb;

    cout << S_trap;
    return S_trap;
}


int method_dihotom2()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 0, b = 3, e = 0.0001, x, fx, fa;

    do {
        x = (a + b) / 2;
        fa = pow(a, 3) + a - 4;
        fx = pow(x, 3) + a - 4;
        if (fx * fa <= 0)
            b = x;
        else
            x = a * (-1);

    } while (abs(a - b) <= 2 * e);

    cout << x;
    return x;
}




int method_trap3()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 1, b = 6, h, S, x, fx, fn;

    h = (b - a) / n;
    x = a;
    S = 0;

    do {
        fx = pow(x, 3) + 1;
        fn = pow(x + h, 3) + 1;
        S = S + h * (fx + fn) / 2;
        x = x + h;
    } while (x <= b - h);

    cout << S;
    return S;
}

int method_parab3()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 1, b = 6, h, S1, S2, x, i, fx, fa, fb, fn, S_trap;

    h = (b - a) / (2 * n);
    x = a + 2 * h;
    S1 = 0;
    S2 = 0;
    i = 1;
    fa = pow(a, 3) - 3;
    fb = pow(b, 3) - 3;

    do {
        fx = pow(x, 3) + 1;
        S2 = S2 + fx; x = x + h;
        S1 = S1 + fx;
        x = x + h;
        i = i + 1;
        fn = pow(a + h, 3) - 3;
    } while (i >= n);
    S_trap = h / 3 * (fa + 4 * fn) + 4 * S1 + 2 * S2 + fb;

    cout << S_trap;
    return S_trap;
}


int method_dihotom3()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 1, b = 6, e = 0.0001, x, fx, fa;

    do {
        x = (a + b) / 2;
        fa = pow(a, 3) + 2 * a - 1;
        fx = pow(x, 3) + 2 * x - 1;
        if (fx * fa <= 0)
            b = x;
        else
            x = a * (-1);
    } while (abs(a - b) <= 2 * e);

    cout << x;
    return x;
}




int method_trap4()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 1, b = 6, h, S, x, fx, fn;

    h = (b - a) / n;
    x = a;
    S = 0;

    do {
        fx = 5 - pow(x, 2);
        fn = 5 - pow(x + h, 2);
        S = S + h * (fx + fn) / 2;
        x = x + h;
    } while (x <= b - h);

    cout << S;
    return S;
}

int method_parab4()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 1, b = 6, h, S1, S2, x, i, fx, fa, fb, fn, S_trap;

    h = (b - a) / (2 * n);
    x = a + 2 * h;
    S1 = 0;
    S2 = 0;
    i = 1;
    fa = 5 - pow(a, 2);
    fb = 5 - pow(b, 2);

    do {
        fx = pow(x, 3) + 1;
        S2 = S2 + fx; x = x + h;
        S1 = S1 + fx;
        x = x + h;
        i = i + 1;
        fn = pow(a + h, 3) - 3;
    } while (i >= n);
    S_trap = h / 3 * (fa + 4 * fn) + 4 * S1 + 2 * S2 + fb;

    cout << S_trap;
    return S_trap;
}


int method_dihotom4()
{
    setlocale(LC_CTYPE, "Russian");

    double n = 200, a = 8, b = 12, e = 0.0001, x, fx, fa;

    do {
        x = (a + b) / 2;
        fa = 2 - pow(a, 3) + a;
        fx = 2 - pow(x, 3) + x;
        if (fx * fa <= 0)
            b = x;
        else
            x = a * (-1);
    } while (abs(a - b) <= 2 * e);

    cout << x;
    return x;
}




int main()
{
    setlocale(LC_CTYPE, "Russian");

        cout << "Вариант 1";
        cout << "\nМетод трапеции: ";
        method_trap();

        cout << "\nМетод параболы: ";
        method_parab();

        cout << "\nМетод дихотомии: ";
        method_dihotom();



        cout << "\n\nВариант 8";
        cout << "\nМетод трапеции: ";
        method_trap2();

        cout << "\nМетод параболы: ";
        method_parab2();

        cout << "\nМетод дихотомии: ";
        method_dihotom2();



        cout << "\n\nВариант 3";
        cout << "\nМетод трапеции: ";
        method_trap3();

        cout << "\nМетод параболы: ";
        method_parab3();

        cout << "\nМетод дихотомии: ";
        method_dihotom3();



        cout << "\n\nВариант 5";
        cout << "\nМетод трапеции: ";
        method_trap4();

        cout << "\nМетод параболы: ";
        method_parab4();

        cout << "\nМетод дихотомии: ";
        method_dihotom4();
}
















//Вычислить s = 1 / 2x + 1 / 3x + ... + 1 / nx, где n = 4, x = 2(2)10.