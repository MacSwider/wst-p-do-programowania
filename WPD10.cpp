#include <iostream>

using namespace std;


void zadanie_1()
{

}


int main()
{
	int value,arg=1,sum_temp, sum_total=0;
	cout << "Insert value of n: ";
	cin >> value;
	
	for (int i = arg; i <= value; i++)
	{
		cout << "n"<<i<< "="<<i * (1 + i) / 2 << endl;
		sum_temp = i * (1 + i) / 2;
		sum_total = sum_total + sum_temp;
	}
	cout << "The sum of all results is: " << sum_total;
}

