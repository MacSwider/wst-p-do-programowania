#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void zadanie_1()

{
	int B, S;
	cout << "Podaj cene produktu" << endl;
	cin >> B;
	cout << "Podaj cene sprzedazy" << endl;
	cin >> S;

	if (S < B) { cout << "Strata wynosi: " << B - S << endl; }
	else { cout << "Zysk wynosi: " << S - B << endl; }

}

void zadanie_2()

{
	int  rok;
	cout << "Podaj rok" << endl;
	cin >> rok;

	if ((rok % 4 == 0 || rok % 400 == 0) && rok % 100 != 0)
	{
		cout << "Rok jest przestepny" << endl;
	}
	else { cout << "Rok nie jest przestepny" << endl; }

}

void zadanie_3() // do dokonoczenia

{
	int godzina, do_przodu;
	string pora;

	cout << "Podaj godzine" << endl;
	cin >> godzina;
	cout << "AM czy PM ? " << endl;
	cin >> pora;		//am albo pm
	cout << "Ile godzin w przod?" << endl;
	cin >> do_przodu;

	int wyn = (pora.compare("am"));


	if (godzina > 12 || wyn == 1)
	{
		int wyn = (pora.compare("pm"));
		if (wyn == 1)
		{
			cout << "Nie prawidlowy zapis" << endl;
		}




}


int main()
{

	}
	




}

