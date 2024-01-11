#include <iostream>
using namespace std;
int main(){
	int wybor;
    float netto;
	float brutto;
    cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
    cin >> wybor;
    switch(wybor){
        case 1:
            cout << "Podaj kwote netto: ";
            cin >> netto;
            cout << "Brutto: " << netto*1.23 << " zl" << endl;
            break;
        case 2:
            cout << "Podaj kwote brutto: ";
            cin >> brutto;
            cout << "Netto: " << brutto/1.23 << " zl" << endl;
            break;
    }
}