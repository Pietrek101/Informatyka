#include <iostream>
using namespace std;
int main(){
	char a[100];
	char e[100];
	int b = 0;
	int c = 0;
	char d = 0;
	int f = 100;
    cout << "Podaj ciąg znaków (max. 100 znaków): "; 
    cin.getline(a,100);
    cout << "Podaj szukaną literę w ciągu: ";
    cin >> d;
    for(int i=0; i < 100; i++){
        if(a[ i ]!=0){
            c+=1;}
        if(a [ i ]==d){
            b+=1;}
    }
    for(int j=0; j < 100; j++){
        a[ f ] >> e[ j ];
        f -= 1;
    }
    cout << "Długość ciągu: " << c << endl;
    cout << "Ciąg w odwrotnej kolejności: " << e << endl;
    cout << "Wystąpienia litery " << d << ": " << b << endl;
}