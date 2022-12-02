#include <iostream>
#include <string>

using namespace std;

/*
int secondToMax(int arg[], int length)
{
	int largest{}, secondlargest;
	for (int i = 0; i < length; i++)
	{
		if (largest < arg[i]) 
		{
			secondlargest = largest;
			largest = arg[i];
		}

	}
	return secondlargest;
}

int main()
{
	int tablica[20];
	srand((unsigned)time(0));
	int length = sizeof(tablica) / sizeof(int);

	int second_highest = 0;

	for (int i = 1; i < 20; i++)

	{
		tablica[i] = rand() % 101;
		cout << tablica[i] << endl;
		if(tablica[i] > second_highest)
		{
			second_highest = tablica[i];
		}
	}
	cout << "2nd largest: " << secondToMax(tablica, length);

	
	
}
*/

/*
string reversedText(string arg)
{
	string rev = arg;
	reverse(rev.begin(), rev.end());
	cout << rev;
	return rev;
}

int main()
{
	string text;
	cout << "enter text: " << endl;
	cin >> text;
	reversedText(text);
}
*/

/*
int gcd(int arg_A, int Arg_B)
{
	int val;
	if (arg_A > Arg_B)
	{
		int temp = arg_A;
		arg_A = Arg_B;
		Arg_B = temp;
	}

	for (int i = 1; i <= arg_A; ++i) {
		if (Arg_B % i == 0 && arg_A % i == 0) {
			val = i;
		}
	}

	cout << "The greatest common value of A and B: " << val;
	return 0;
}

int main()
{
	int A, B;
	cout << " enter A: ";
	cin >> A;
	cout << " enter B: ";
	cin >> B;

	gcd(A, B);

}
*/
void randomNumbers(int arg_A)
{
	srand((unsigned)time(0));
	arg_A= rand
}

int main()
{
	int A

}