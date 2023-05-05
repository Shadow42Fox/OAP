#include <iostream>
using namespace std;

void matrix();            //прототип
void symbols();
 
int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	char ArrayOfChar[] = { 'W', 'O', 'R','L','D' };
	char* pArr = ArrayOfChar;
	pArr += 3;
	cout << *pArr;

	
}
