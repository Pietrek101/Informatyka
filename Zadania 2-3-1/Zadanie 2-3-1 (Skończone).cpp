#include <iostream>
using namespace std;
int main(){
	char tab[]{2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
	int b;
    cout << "Jaka liczbe poszukujesz? " << endl;
    cin >> b;
	int c;
	for(int a=0; a < sizeof(tab); a++){
   		if(tab[a] == b) c++;
	}
	int liczby[c];
    int index = 0;
    for(int liczba=0; liczba < sizeof(tab); liczba++){
    	if(tab[liczba] == b){
    		liczby[index] = liczba;
    		index++;
		}
	}
    cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
    for(int licz=0; licz < c; licz++){
    	cout << liczby[licz] << ", ";
	}
}
