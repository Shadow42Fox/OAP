#include <iomanip> 
#include <iostream>


void gribochek() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;

	char cimvol, probel = ' ';
	cout << "Введите символ: ";
	cin >> cimvol;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(2) << setfill(cimvol) << cimvol << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(4) << setfill(cimvol) << cimvol << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(6) << setfill(cimvol) << cimvol << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(8) << setfill(cimvol) << cimvol << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(cimvol) << cimvol << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(cimvol) << cimvol << endl;

	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(cimvol) << cimvol << endl;

	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(cimvol) << cimvol << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(cimvol) << cimvol << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(8) << setfill(cimvol) << cimvol << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(6) << setfill(cimvol) << cimvol << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(4) << setfill(cimvol) << cimvol << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(2) << setfill(cimvol) << cimvol << endl;
}

void score() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;

	int plane, rac, sat, score; //вариант 14
	cout << "Введите количество сбитых самолетов "; cin >> plane;
	cout << "Введите количество сбитых ракет "; cin >> rac;
	cout << "Введите количество сбитых спутников "; cin >> sat;
	score = 50 * plane + 100 * rac + 200 * sat;
	cout << "Итоговый счёт: " << score;
}



void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	gribochek();
	score();
}


	
	/*char c, probel;
	probel = ' ';
	cout << "Введите символ ";
	cin >> c;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(49) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(47) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;

	double С, r, s;
	cout << "\nПотоковый способ\n" << endl;
	cout << "  Выберите число ";
	cin >> С;
	r = С / (2 * 3.14);
	s = pow(r, 2) * 3.14;
	cout << "  Площадь круга= " << s << endl;
}*/


	/*char c, probel = ' '; //Вариант 16
	int v1, v2, v3, v4, v5, v6, vmain;
	cout << "Введите символ: "; cin >> c;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(21) << setfill(c) << c << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;

	cout << setw(36) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;


	cout << "Введите среднюю скорость на 1м отрезке пути: "; cin >> v1;
	cout << "Введите среднюю скорость на 2м отрезке пути: "; cin >> v2;
	cout << "Введите среднюю скорость на 3м отрезке пути: "; cin >> v3;
	cout << "Введите среднюю скорость на 4м отрезке пути: "; cin >> v4;
	cout << "Введите среднюю скорость на 5м отрезке пути: "; cin >> v5;
	cout << "Введите среднюю скорость на 6м отрезке пути: "; cin >> v6;
	vmain = (v1+v2+v3+v4+v5+v6)/6;
	cout << "Средняя скорость на всём пути: " << vmain;
}*/
