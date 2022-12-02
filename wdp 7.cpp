#include <iostream>
#include <stdlib.h>

using namespace std;

/*  ZAD 1
void zad1(int argument[])
{
	int suma = 0;

	for (int i=0;i<20;i++)
	{
		suma = suma + argument[i];
	}

	cout << suma;
}

int main()
{
	int tablica[20];
	srand((unsigned)time(0));
	for (int i=0; i<20;i++)
	{
		
		tablica[i]= rand() % 100;
		
		cout << tablica[i] << endl;
	}
	cout << "suma wynosi: ";
	zad1(tablica);
	
}
*/

/* ZAD 2
void zad2(int argument[])
{
	int suma =  0;

	int i;

	for (i = 0; i < 20; i++)
	{
		if(argument[i] % 2 ==0)
		suma = suma + argument[i];
	}
	cout << suma;
}

int main()
{
	srand((unsigned)time(0));
	int tablica[20];
	for (int i = 0; i < 20; i++)
	{
		
		tablica[i] = rand() % 100;

		cout << tablica[i] << endl;
	}
	cout << "suma elementow parzystych wynosi: ";
	zad2(tablica);

}
*/

/* ZAD 3
void zad3(int argument[])
{
	int wartosc = 0;
	for (int i = 0; i < 20; i++)
	{

		if (argument[i] > wartosc)
		{
			wartosc = argument[i];
		}
	}
	cout << wartosc;
}
int main()
{
	srand((unsigned)time(0));
	int tablica[20];

	for (int i = 0; i < 20; i++)
	{

		tablica[i] = rand() % 100;

		cout << tablica[i] << endl;
	}
	cout << "Najwieksza wartosc: ";
	zad3(tablica);
}
*/

void zad4(int argA[], int ArgB[], int ArgC[])
{
	for (int i = 0; i < 20; i++)
	{

		if (argA[i] == ArgB[i] && argA[i] == ArgC[i])
		{
			cout << "3 tablice maja taka sama wartosc dla indeksu: " << i+1 << endl;
		}
		else if (argA[i] == ArgB[i] || argA[i] == ArgC[i] || ArgB[i] == ArgC[i])
		{
			cout << "2 tablice maja taka sama wartosc dla indeksu: " << i + 1 << endl;
		}
		else { cout << "Zadna z tablic nie ma takich samych wartosci dla indeksu: " << i + 1 << endl; }
	}
}


int main()
{
	int Tablica_A[20], Tablica_B[20], Tablica_C[20];
	srand((unsigned)time(0));
	int x = 1;

	for (int i = 0; i < 20; i++)
	{

		Tablica_A[i] = 1+ rand() % 3;
		Tablica_B[i] = 1+ rand() % 3;
		Tablica_C[i] = 1+ rand() % 3;

		cout << Tablica_A[i] << " " << Tablica_B[i] << " " << Tablica_C[i] << " " << endl;
	}

	zad4(Tablica_A, Tablica_B, Tablica_C);
}


/*
int zad5a(string b)
{
	int counter = 0;
	for (int i = 0; i < b.length(); i++)
	{
		if(b[i] >= 'a' and b[i] <= 'z')
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	int wynik_a;
	string a;
	cout << "wprowadz ciag znakow" << endl;
	cin >> a;
	wynik_a = zad5a(a);
	cout << wynik_a;
}
*/
