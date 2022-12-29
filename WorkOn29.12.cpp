#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);	
	//1
	/*char elem;
	cout << "Введіть елемент:";
	cin >> elem;
	cout << (int)elem << "-це id" << endl;
	if ((elem >= 65)&&(elem <= 90))
		cout << "Великі букви";
	if ((elem >= 48) && (elem <= 57))
		cout << "Цифри";
	if ((elem >= 97) && (elem <= 122))
		cout << "Маленькі букви";
	else
		cout << "Інші символи";*/

	//2
	int x;
	int y;
	cout << "Введіть x:";
	cin >> x;
	cout << "Введіть y:";
	cin >> y;
	if ((x == 0) && (y == 0)) {
		cout << "Точка знаходится на початку координат" << endl;
	}
	if ((x == 1*x) && (y == 1*y)) {
		cout << "Точка в Першій четверті";
	}
	
	if ((x == -1*x) && (y == 1*y)) {
		cout << "Точка в другій четверті";
	}		
	
	
	
	





}

