#include <iostream>
using namespace std;
int main(){
	char a[100];
	int b = 0;
    cout << "Poszukiwana nazwa pliku w tekscie: ";
    cin.getline(a,100);
    for(int j=0; j < 100; j++){
    	if(a[ b ]==0){
    		cout << "Pozycja konca: " << b << endl;
    		break;}
		if(a[ b ]=='.'){
			cout << "Pozycja kropki: " << b << endl;}
		if(a[ b ]=='Zadanie-1.cpp'){
			cout << "Pozycja poczatku nazwy pliku: " << b << endl;}
		if(a[ b ]=='Zadanie-1'){
			cout << "Nazwa pliku: " << b << endl;}
		if(a[ b ]=='Zadanie-1.cpp'){
			cout << "Rozszerzenie pliku: " << b << endl;}
    	b+=1;
	}
}