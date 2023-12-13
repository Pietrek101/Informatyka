#include <iostream>
using namespace std;
int main(){
	char a[200];
	int b = 0;
    cout << "Podaj tekst o maksymalnej dlugosci 200 znakow: "; 
    cin.getline(a,200);
    for(int j=0; j < 200; j++){
		if(a[ b ]==' '){
			a[ b ] = '-';}
    	if(a[ b ]=='.'){
    		a[ b ] = '-';}
    	b+=1;
	}
	cout << a << endl;
}