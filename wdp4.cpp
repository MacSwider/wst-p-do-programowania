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

void zadanie_3() 

{
	 int godzina, do_przodu;
    cout << " Podaj godzine: " << endl;
    cin >> godzina;
    if (godzina > 12 || godzina < 1) {
        cout << "E-1  Nieprawidlowy zapis " << endl;
    } else {
        string time;
        string am = "am" , pm = "pm";
        cout << "am czy pm?" << endl;
        cin >> time;
        cout << "Ile godzin do przodu ?" << endl;
        cin >> do_przodu;
        int po = (do_przodu % 12) + godzina;
        int ostateczny = po - 12;
        if (time.compare(am) == 0) {
            if(po > 12) {
                cout << ostateczny << " pm" << endl;
            } else {
                cout << po << " am" << endl;
            }
        }
        else if (time.compare(pm) == 0) {
            if(po > 12) {
                cout << ostateczny << " am" << endl;
            } else {
                cout << po << " pm" << endl;
            }
        }
    }




}


int main()
{

	
	




}

