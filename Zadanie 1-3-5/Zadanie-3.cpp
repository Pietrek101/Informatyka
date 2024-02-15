#include <iostream>
using namespace std;
int e = 1;
void liczba (float *d){
    *d += e;
    e += 1;
}
int main(){
	float a = 1;
	float b = 1;
	float c = 1;
	float *wsk1 = &a;
	float *wsk2 = &b;
	float *wsk3 = &c;
	cout << "wartosci zmiennych: " << endl;
	cout << "a: " << a << " adres obiektu: " << &a <<  endl;
	cout << "b: " << b << " adres obiektu: " << &b << endl;
	cout << "c: " << c << " adres obiektu: " << &c << endl;
	cout << "wartosci zmiennych po modyfikacji: " << endl;
	liczba(wsk1);
	cout << "a: " << a << endl;
	liczba(wsk2);
	cout << "b: " << b << endl;
	liczba(wsk3);
	cout << "c: " << c << endl;
}