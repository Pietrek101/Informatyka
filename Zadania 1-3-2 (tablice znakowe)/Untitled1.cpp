#include <iostream>
using namespace std;
int main(){
	char a[100];
	int b = 0;
    cout << "Podaj imie i nazwisko: "; 
    cin.getline(a,100);
    for(int j=0; j < 100; j++){
		if(a[ b ]==' ')cout << "Pozycja spacji: " << b << endl;
    	if(a[ b ]==0){
    		cout << "Pozycja konca: " << b << endl;
    		break;
		}
    	b+=1;
	}
}