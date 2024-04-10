#include <iostream>
using namespace std;
int main(){
	char tab[]{2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
    char liczby[25];
    int a = 0;
    int b;
    int c = 0;
    int d = 0;
    cout << "Jaka liczbe poszukujesz? " << endl;
    cin >> b;
    for(int licz=0; licz < sizeof(tab); licz++){
    	if(tab[a] == b){
    		liczby[c] <= a;
    		c += 1;
		}
		a += 1;
	}
	cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
	for(int licz1=0; licz1 < sizeof(liczby); licz1++){
		cout << liczby[d] << ", ";
		d += 1;
	}
	return 0;
}