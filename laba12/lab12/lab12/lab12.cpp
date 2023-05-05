#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iterator>
#include <sstream>
using namespace std;

//void task1()
//{
//	char str_main[50], str_n[50];
//	int k, len, len2;
//	cout << "Enter string: "; //Вводим основную строку
//	cin >> str_main;
//	len = strlen(str_main); //Считаем длину основной строки
//	cout << "\nLen of string: " << len << endl;
//
//	cout << "Enter second string: "; //Вводим вторую строку
//	cin >> str_n;
//	len2 = strlen(str_n); //Считаем длину второй строки
//	cout << "\nLen of string: " << len2 << endl;
//
//	cout << "Enter number where we add elements: ";
//	cin >> k;
//	for (int j = 0; j < len; j++) {
//		cout << str_main[j];
//		if (j == k - 1) {
//			cout << str_n;
//		}
//	}
//}
//
//
//void task2(){
//	char str_main[] = "011__00110_1001_0111111____0000110";
//	char str_end[5];
//	for (int i = 0, j = 0; i < strlen(str_main);) {
//		if (str_main[i] != '_') {
//			str_end[j] = str_main[i];
//			i = i + 1;
//			j = j + 1;
//		}
//		else{
//			if (j == 5) {
//				cout << str_end;
//				break;
//			}
//			else {
//				j = 0;
//				char str_end[5] = { 0 };
//				i++;
//			}
//		}
//	}
//}


void dop3(){
    string str = "0f Real Madrid Champions of Spain of"; // исходная строка
    cout << str << endl;
    string asd = "of";  // что удаляем
    int size = 2;       // количество
    int n;              // позиция удаляемого
    for (int i = 0; i < size; i++)
    {
        n = str.find(asd);   // ищем
        str.erase(n, asd.size());  // удаляем
    }
    cout << str << endl;
}

void dop5() {
    const string s1{ "Yesterday we obeyed kings and bowed before the Emperor" };
    cout << s1 << endl;
    const string s2{ "Tomorrow we will kneel only before the Truth" };
    cout << s2 << endl;
    stringstream sss(s2);
    unordered_set<string>sal{ istream_iterator<string>(sss),istream_iterator<string>() };
    sss.str("");
    sss.clear();
    sss << s1;
    cout << *min_element(istream_iterator<string>(sss), istream_iterator<string>(), [&sal](const string& a, const string& b) {
        return a.length() < b.length() && sal.find(a) == sal.end();
        });
}
void main() {
    /*task1();
    cout << endl << endl;
    task2();
    cout << endl << endl;*/
    dop3();
    cout << endl << endl;
    dop5();
}
    

