#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include<locale>
using namespace std;

class Random {
public:
    Random(int min, int max) : min(min), max(max) {
        srand(std::time(NULL));
    }

    int operator()() {
        return min + std::rand() % (max - min);
    }
private:
    int min;
    int max;
};



    /*
    int massiv[100], j, i, numb, k, delet;
    int sum = 0;
    srand(time(0));
    cout << "Введите число элементов массива:" << endl;
    cin >> numb;
    cout << "Массив:" << endl;

    for (i = 0; i < numb; i++)
    {
        massiv[i] = rand() % 100;
        cout << massiv[i] << "  ";
    }

    cout << endl;
    cout << "Введите число для удаления: ";
    cin >> delet;
    k = 0;
    for (i = j = 0; i < numb; i++)
    {
        if (massiv[i] != delet)
        {
            massiv[j++] = massiv[i];
            k += 1;
        }
    }

    for (j = 0; j < k; j++) {
        cout << massiv[j] << " 1 ";
    }
    cout << endl;*/

   /* int i, j, k; 
    const int n = 4;
    char mainMassive[n], numbers[n], symbols[n];

    cout << "Введите элементы массива: ";
    for (i = 0; i < n; i++)
    {
        cin >> mainMassive[i];
    }
    for (int j = 0; j <= i;) {
        for (int k = 0; k <= i;) {
            if (mainMassive[i] >= 0 and mainMassive[i] <= 100)
            {
                numbers[j] = mainMassive[i];
                i += 1;
                j += 1;
            }
            else if (mainMassive[i] >= 0x41 and mainMassive[i] <= 0xFF) {
                symbols[k] = mainMassive[i];
                i += 1;
                k += 1;
            }


            cout << "" << numbers[j] << endl;
            cout << "" << symbols[k];
        }
    }*/


    /*const int n = 100;
    int count = 0;
    string arr[n] = { "1", "2", "3", "a", "b", "c","d" }, arr_char[n], arr_num[n], arr_numbers[9] = { "1","2","3","4","5","6","7","8","9" };
    for (int i = 0; i <= 6; i++)
    {
        for (string num_1 : arr_numbers)
        {
            if (arr[i] == num_1)
            {
                count++;
            }
            else { continue; }
        }
        if (count == 1)
        {
            arr_num[i] = arr[i];
            count = 0;
        }
        else
        {
            arr_char[i] = arr[i];
        }
    }
    cout << "Изначальный массив: ";
    for (string start : arr)
    {
        cout << start;
    }
    cout << "\nМассив с цифрами: ";
    for (string sim : arr_num)
    {
        cout << sim;
    }
    cout << "\nМассив с символами: ";
    for (string chis : arr_char)
    {
        cout << chis;
    }
    return 0;*/

   //Доп 2
void dop2() {
    const size_t size = 100;
    int    arr[size];
    const int    min = -50;
    const int    max = 50;

    generate(arr, arr + size, Random(min, max + 1));

    int pair_count = 0;
    for (size_t i = 1; i < size; ++i)
        if (arr[i - 1] == arr[i])
            ++pair_count;

    cout << "Array: " << endl;
    copy(arr, arr + size, ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "Pair count: " << pair_count << endl;
}
   //Доп 3
void dop3() {
    int i;
    int kol = 0;
    int A[10] = { 4,4,4,4,4,4,4,4,3,7 };
    for (i = 0; i < 10; i++)
    {
        printf("A[i%d]=%d\n", i, A[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (A[i] == A[i++])
        {
            kol++;
        }
        else
        {
            break;
        }
    }
    printf(" Hаибольшее число подряд идущих одинаковых элементов=%d\n", kol);
}

void dop1(){
    const int r = 100;
    int arr[r], a, y, x, i = 0, s = 0, t = 0, b = 0; float n;

    cout << "Введите количество дней (n < 100) ";
    cin >> n;
    if ((n <= 99) && (n - (int)n == 0))
    {
        srand((unsigned)time(NULL));
        cout << "Количество осадков каждодневно: ";
        for (i; i < n; i++)
        {
            arr[i] = rand() % 40;
            cout << arr[i] << " ";
        }
        cout << endl;
        if (n > 7)
        {
            i = 0;
            for (a = 7; a <= n; a += 7)
            {
                s = 0;
                for (i; i < a; i++)
                    s += arr[i];
                t++;
                if (s > b)
                {
                    b = s;
                    x = t;
                }
            }
            a = ((int)n / 7) * 7;
            y = n - a;
            s = 0;
            for (i; i < n; i++)
                s += arr[i];
            t++;
            if (s > b)
            {
                b = s;
                x = t;
            }
            cout << "Самое большое количество осадков, равное " << b << ", выпало на " << x << " неделе\n";
        }
        else
        {
            for (i = 0; i < n; i++)
                s += arr[i];
            cout << "Самое большое количество осадков, равное " << s << ", выпало на 1 неделе\n";
        }
    }
    else
    cout << "Ваше число не соответствует условию, попробуйте еще раз\n";
}


int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Дополнительное задание 2: " << endl << endl; 
    dop2();
    cout << "\n\nДополнительное задание 3: " << endl << endl;
    dop3();
    cout << "\n\nДополнительное задание 1: " << endl << endl;
    dop1();
}