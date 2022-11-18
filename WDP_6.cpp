#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void zadanie_1()
{
    int b[5];
    int a = 1;
    int wartosc = 1;
    for (int i = 1; i < 6; i++)
    {
        b[a] = wartosc;
        wartosc = wartosc + 1;
        cout << b[a] << endl;
        a == a + 1;
    }
    
}
void zadanie_2()
{
    int parzyste[5] = { 2, 4, 6, 8, 10 };
    cout << "Length of array: " << sizeof(parzyste) / sizeof(int);
}
void zadanie_3()
{
    srand((unsigned)time(0));
    int tablica[20];
    int A;
    int suma = 0;
    for (int i = 0; i < 20; i++) {
        A = (rand() % 100) + 1;
        cout << A << endl;
        tablica[i] = A;
        suma = suma + tablica[i];

    }
    cout << "Suma tablicy wynosi: " << suma << endl;

}

int main()
{
   // Należy przeklejać zadania
}

