#include <iostream>
using namespace std;
struct zwierzeta{
	string nazwa;
	string waga;
	string wiek;	};
int main(){
    zwierzeta a[ 5 ];
    cout << "Wprowadz dane zwierzat: " << endl;
    for( short licz = 0; licz < 5; licz++ ) {
        cout << "Nazwa: ";
        cin >> a[ licz ].nazwa;
        cout << "Waga (gram): ";
        cin >> a[ licz ].waga;
        cout << "Wiek (tygodnie): ";
        cin >> a[licz].wiek;
    }
    cout << endl << "Wprowadzone zwierzeta: " << endl;
    for( short licz = 0; licz < 5; licz++ ) {
        cout << "Zwierze nr " << licz + 1;
		cout << "\tNazwa: " << a[ licz ].nazwa;
        cout << "\tWaga: " << a[ licz ].waga;
        cout << "\tWiek: " << a[ licz ].wiek << endl;
    }
    cin.get();
    return(0);
}