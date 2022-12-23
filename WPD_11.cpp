// WPD_11.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;


int factorial(int n) //Do zadania 1
{

	if (n == 1)
	{
		return 1;	
	}
	else if (n < 0)
	{
		cout << "negative number";
		return 0;
	}

	
	return n * factorial(n - 1);
	
}

int elementCiag(int n) //Do zadanie 2
{
	if (n == 1)
	{
		return 1;
	}

	return -n * elementCiag (n - 1) + 4;
}
int Fibbonaci(int n)

{
	if (n == 0) { return 0; }
	else if (n == 1) { return 1; }
	else if (n < 0) { return 0; }
	else return Fibbonaci(n - 1) + Fibbonaci(n - 2);
}


int main()
{
	/* ZADANIE 1
	int n, result;
	cin >> n;
	result = factorial(n);
	cout << result;
	*/

	/* ZADANIE 2
	int n, result;
	cin >> n;
	result = elementCiag(n);
	cout << result;
	*/


	int n, result;
	cin >> n;
	result = Fibbonaci(n);
	cout << result;
	
}