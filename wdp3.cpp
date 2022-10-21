#include <iostream>


using namespace std;

void zadanie1()
{
	float x = 5.64, y = 5.34;
	cout << "Suma X i Y wynosi: " << x+y << endl;
}

void zadanie2()
{
	int A = 12, B = 15;
	//zamiana
	int C = A;
	int D = B;
	//Zamiana
	A = D, B = C;

	cout << "A wynosilo 12. Teraz wynosi :" << A << endl;
	cout << "B wynosilo 15. Teraz wynosi :" << B << endl;
}

void zadanie3()

{
	float c;
	cout << "Podaj temperature w Celsjuszach" << endl;
	cin >> c;
	cout << "Temperatura " << c << " stopni Celsjusza to " << c + 273.16 << " stopni Kelwina" << endl;

}

void zadanie4()

{
	int a, b;
	cout << "Podaj A " << endl;
	cin >> a;
	cout << "Podaj B " << endl;
	cin >> b;

	cout << "Wynik z dzielenia wynosi  " << a / b << "Reszta wynosi" << a % b;
}

int main()
//do wklejania kodu z konktretnego zadania
{

	float c;
	cout << "Podaj temperature w Celsjuszach" << endl;
	cin >> c;
	cout << "Temperatura " << c << " stopni Celszuja to " << c + 273 << " stopni Kelwina" << endl;
	
}

