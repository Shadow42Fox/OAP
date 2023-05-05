#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int v1_1(int*);
void v1_2(int**, int&, int&);

long long int v7_1(int*);
void v7_2(int**, int&, int&);

void v10_1(int*, int&);
void v10_2(int**, int&, int&);

int main()
{
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int** matrix;
    int* massiv;
    int action = 0;
    long long sum;
    int n, m, d;
    char s[1000];
    while (action != -1)
    {
        cout << "Введите вариант (1 7 10). Для выхода введите -1" << endl;
        cin >> action;
        switch (action)
        {
        case 1:
            cout << "Введите задание" << endl;
            cin >> action;
            switch (action)
            {
            case 1:
                massiv = new int[15];
                for (int i = 0; i < 15; i++)
                {
                    massiv[i] = 1 + rand() % 200;
                    cout << massiv[i] << " ";
                }

                cout << endl << "sum = " << v1_1(massiv) << endl;
                delete[] massiv;

                break;
            case 2:
                cout << "n = ";
                cin >> n;
                cout << "m = ";
                cin >> m;
                matrix = new int* [n];
                for (int i = 0; i < n; i++)
                    matrix[i] = new int[m];
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < m; j++)
                        cin >> matrix[i][j];
                v1_2(matrix, n, m);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            }
            break;






        case 7:
            cout << "Введите задание" << endl;
            cin >> action;
            switch (action)
            {
            case 1:
                massiv = new int[15];
                for (int i = 0; i < 15; i++)
                {
                    massiv[i] = 1 + rand() % 200;
                    cout << massiv[i] << " ";
                }

                sum = v7_1(massiv);
                cout << endl << "sum = " << sum << endl;
                delete[] massiv;

                break;
            case 2:
                cout << "n = ";
                cin >> n;
                cout << "m = ";
                cin >> m;
                matrix = new int* [n];
                for (int i = 0; i < n; i++)
                    matrix[i] = new int[m];
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < m; j++)
                        cin >> matrix[i][j];
                v7_2(matrix, n, m);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            }
            break;




        case 10:
            cout << "Введите задание" << endl;
            cin >> action;
            switch (action)
            {
            case 1:
                cout << "n = ";
                cin >> n;
                massiv = new int[n];
                for (int i = 0; i < n; i++)
                {
                    cin >> massiv[i];
                }

                v10_1(massiv, n);
                delete[] massiv;

                break;
            case 2:
                cout << "n = ";
                cin >> n;
                cout << "m = ";
                cin >> m;
                matrix = new int* [n];
                for (int i = 0; i < n; i++)
                    matrix[i] = new int[m];
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < m; j++)
                        cin >> matrix[i][j];
                v10_2(matrix, n, m);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            }
            break;
        case -1:
            cout << "exit" << endl;
            break;
        default:
            cout << "error" << endl;
        }
    }
}
int v1_1(int* m)
{
    int sum = 0;
    for (int i = 0; i < 15; i++)
        if (*(m + i) % 2 == 0)
            sum += *(m + i);
    return sum;
}
void v1_2(int** matrix, int& n, int& m)
{
    int index = -1;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] < 0)
            {
                index = i;
                goto b;
            }
        }
    }
b:for (int i = 0; i < m; i++)
{
    matrix[index][i] -= 2 * matrix[index][i];
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
}
long long int v7_1(int* m)
{
    long long int pr = 1;
    for (int i = 2; i <= 7; i++)
        pr *= m[i];
    return pr;
}
void v7_2(int** matrix, int& n, int& m)
{
    int sum = 0;
    bool isFind;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] > 0)
            {
                sum = 0;
                break;
            }
            else
                sum += matrix[i][j];
        }
        if (sum != 0)
            break;
    }
    sum /= m;
    cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            matrix[i][j] -= sum;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void v10_1(int* m, int& n)
{
    int sum = 0;
    for (int i = 0; i < n; i += 2)
        if (*(m + i) % 2 == 0)
            cout << i << " ";
    cout << endl;
}
void v10_2(int** matrix, int& n, int& m)
{
    int index_i = 0, index_j = 0;
    int countM = 0, nMax = matrix[0][0];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (nMax < matrix[i][j])
            {
                index_i = i;
                index_j = j;
                nMax = matrix[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (nMax == matrix[i][j])
                countM++;
        }
    }
    if (countM != 0)
    {
        cout << "count Max = " << countM << endl;
        cout << "Max = " << nMax << endl;
        cout << "i = " << index_i << "  j = " << index_j << endl;
    }
}
