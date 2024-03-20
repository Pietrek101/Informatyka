#include <iostream>
using namespace std;
struct Ksiegarnia{
	string tytul;
	string autor;
	short rok;
	string wydawnictwo;
	float cena;};
int main(){
	Ksiegarnia ksiazki[ 7 ] ={
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1929, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },};
	int wybor;
	float a;
	char wydaw[7];
	int c;
    cout << "Witaj w ksiegarnii: " << endl << "Po jakiej kategorii chcial bys wyszukac ksiazke" << endl << "1. Rok wydania" << endl << "2. Cena" << endl << "3. Wydawnictwo" << endl << "0. Wyjscie" << endl;
	cin >> wybor;
    switch( wybor ){
    case 1:
        cout << "Podaj od jakiego roku chcesz zobaczyć ksiazki: " << endl;
        cin >> a;
        a -= 1925;
        for(int licz=a; licz < 7; licz++){
        	cout << "Tytul: " << ksiazki[licz].tytul << "	Autor: " << ksiazki[licz].autor << "	Rok: " << ksiazki[licz].rok << "	Wydawnictwo: " << ksiazki[licz].wydawnictwo << "	Cena: " << ksiazki[licz].cena << endl;
		}
        break;
    case 2:
        cout << "Podaj od jakiej ceny chcesz zobaczyć ksiazki: " << endl;
        cin >> a;
        a -= 23.54;
        cout << "Znalezione ksiazki: " << endl;
        for(int licz=a; licz < 7; licz++){
        	cout << "Tytul: " << ksiazki[licz].tytul << "	Autor: " << ksiazki[licz].autor << "	Rok: " << ksiazki[licz].rok << "	Wydawnictwo: " << ksiazki[licz].wydawnictwo << "	Cena: " << ksiazki[licz].cena << endl;
		}
        break;
    case 3:
        cout << "Podaj od jakiego wydawcy chcesz zobaczyć ksiazki: " << endl;
        cin >> wydaw;
		if(wydaw[6] == '1'){
			c == 0;
        for(int licz=0; licz < 3; licz++){
        	cout << "Tytul: " << ksiazki[c].tytul << "	Autor: " << ksiazki[c].autor << "	Rok: " << ksiazki[c].rok << "	Wydawnictwo: " << ksiazki[c].wydawnictwo << "	Cena: " << ksiazki[c].cena << endl;
			c + 3;
			}
		}
		else break;
		if(wydaw[6] == '2'){
			c == 1;
        for(int licz=0; licz < 2; licz++){
        	cout << "Tytul: " << ksiazki[c].tytul << "	Autor: " << ksiazki[c].autor << "	Rok: " << ksiazki[c].rok << "	Wydawnictwo: " << ksiazki[c].wydawnictwo << "	Cena: " << ksiazki[c].cena << endl;
			c + 3;
			}
		}
		else break;
		if(wydaw[6] == '3'){
			c == 2;
        for(int licz=0; licz < 2; licz++){
        	cout << "Tytul: " << ksiazki[c].tytul << "	Autor: " << ksiazki[c].autor << "	Rok: " << ksiazki[c].rok << "	Wydawnictwo: " << ksiazki[c].wydawnictwo << "	Cena: " << ksiazki[c].cena << endl;
			c + 3;
			}
		}
		else break;
        break;

    }
    cin.get();
    return(0);
}