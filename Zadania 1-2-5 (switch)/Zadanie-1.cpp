#include <iostream>
using namespace std;
int main(){
	float liczba1;
	float liczba2;
	double wynik;
	char znak;
    cout << "Podaj 1 liczbe: ";
    cin >> liczba1;
    cout << "Podaj 2 liczbe: ";
    cin >> liczba2;
    cout << "Wybierz operator arytmetyczny ( + oznacza dodawanie, - odejmowanie, * mnożenie, a / dzielenie ) ";
    cin >> znak;
	switch( znak ){
    	case '+':
    		wynik=liczba1+liczba2;
    		cout << wynik;
			break;
		case '-' :
			wynik=liczba1-liczba2;
    		cout << wynik;
			break;
		case '*' :
			wynik=liczba1*liczba2;
    		cout << wynik;
			break;
		case '/' :
			wynik=liczba1/liczba2;
    		cout << wynik;
			break;
	}
	return 0;
}