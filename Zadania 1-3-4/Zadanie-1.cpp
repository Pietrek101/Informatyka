#include <iostream>
using namespace std;
int suma(int a, int b){
	return a+b;}
double suma(double c, double d){
	return c+d;}
int main(){
	double c,d;
	int a,b;
	cout << "Podaj dwie liczby calkowite: " << endl;
	cin >> a;
	cin >> b;
	cout << "Podaj dwie liczby zmiennoprzecinkowe: " << endl;
	cin >> c;
	cin >> d;
	cout << "Suma liczb calkowitych: " << suma(a,b) << endl;
	cout << "Suma liczb zmiennoprzecinkowych: " << suma(c,d) << endl;
	return 0;}