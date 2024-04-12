#include <iostream>
using namespace std;
int main(){
	char tab[]{2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
    int b;
    cout << "Jaka liczbe poszukujesz? " << endl;
    cin >> b;
    cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
    for(int licz=0; licz < sizeof(tab); licz++){
    	if(tab[licz] == b){
    	cout << licz << ", ";}
	}
}