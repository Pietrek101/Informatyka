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
	char d[7];
	int c = 0;
    cout << "Witaj w ksiegarnii: " << endl << "Po jakiej kategorii chcial bys wyszukac ksiazke" << endl << "1. Rok wydania" << endl << "2. Cena" << endl << "3. Wydawnictwo" << endl << "0. Wyjscie" << endl;
	cin >> wybor;
    switch( wybor ){
    case 1:
        cout << "Podaj od jakiego roku chcesz zobaczyæ ksiazki: " << endl;
        cin >> a;
        a -= 1925;
        for(int licz=a; licz < 7; licz++){
        	cout << "Tytul: " << ksiazki[licz].tytul << "	Autor: " << ksiazki[licz].autor << "	Rok: " << ksiazki[licz].rok << "	Wydawnictwo: " << ksiazki[licz].wydawnictwo << "	Cena: " << ksiazki[licz].cena << endl;
		}
        break;
    case 2:
        cout << "Podaj od jakiej ceny chcesz zobaczyæ ksiazki: " << endl;
        cin >> a;
        a -= 23.54;
        cout << "Znalezione ksiazki: " << endl;
        for(int licz=a; licz < 7; licz++){
        	cout << "Tytul: " << ksiazki[licz].tytul << "	Autor: " << ksiazki[licz].autor << "	Rok: " << ksiazki[licz].rok << "	Wydawnictwo: " << ksiazki[licz].wydawnictwo << "	Cena: " << ksiazki[licz].cena << endl;
		}
        break;
    case 3:
        cout << "Podaj od jakiego wydawcy chcesz zobaczyæ ksiazki: " << endl;
        cin >> d;
        cout << d << endl;
		if(d[6] == '1'){
        cout << "Tytul: " << ksiazki[0].tytul << "	Autor: " << ksiazki[0].autor << "	Rok: " << ksiazki[0].rok << "	Wydawnictwo: " << ksiazki[0].wydawnictwo << "	Cena: " << ksiazki[0].cena << endl;
		cout << "Tytul: " << ksiazki[3].tytul << "	Autor: " << ksiazki[3].autor << "	Rok: " << ksiazki[3].rok << "	Wydawnictwo: " << ksiazki[3].wydawnictwo << "	Cena: " << ksiazki[3].cena << endl;
		cout << "Tytul: " << ksiazki[6].tytul << "	Autor: " << ksiazki[6].autor << "	Rok: " << ksiazki[6].rok << "	Wydawnictwo: " << ksiazki[6].wydawnictwo << "	Cena: " << ksiazki[6].cena << endl;
		}
		if(d[6] == '2'){
		cout << "Tytul: " << ksiazki[1].tytul << "	Autor: " << ksiazki[1].autor << "	Rok: " << ksiazki[1].rok << "	Wydawnictwo: " << ksiazki[1].wydawnictwo << "	Cena: " << ksiazki[1].cena << endl;
		cout << "Tytul: " << ksiazki[4].tytul << "	Autor: " << ksiazki[4].autor << "	Rok: " << ksiazki[4].rok << "	Wydawnictwo: " << ksiazki[4].wydawnictwo << "	Cena: " << ksiazki[4].cena << endl;
		}
		if(d[6] == '3'){
		cout << "Tytul: " << ksiazki[2].tytul << "	Autor: " << ksiazki[2].autor << "	Rok: " << ksiazki[2].rok << "	Wydawnictwo: " << ksiazki[2].wydawnictwo << "	Cena: " << ksiazki[2].cena << endl;
		cout << "Tytul: " << ksiazki[5].tytul << "	Autor: " << ksiazki[5].autor << "	Rok: " << ksiazki[5].rok << "	Wydawnictwo: " << ksiazki[5].wydawnictwo << "	Cena: " << ksiazki[5].cena << endl;
		}
        break;
    }
    cin.get();
    return(0);
}
