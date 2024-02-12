#include <iostream>
using namespace std;
void abcd (int *d){
    *d+= 1;
    *d+= 2;
    *d+= 3;
}
int main(){
	float a = 1;
	float b = 1;
	float c = 1;
	int *wsk1 = &a;
	int *wsk2 = &b;
	int *wsk3 = &c;
	cout << "wartosci zmiennych: " << endl;
	cout << "a: " << a << "adres obiektu: " <<  endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	cout << "wartosci zmiennych po modyfikacji: " << endl;
	cout << "a: " << *d << endl;
	cout << "b: " << *d << endl;
	cout << "c: " << *d << endl;
}