#include <iostream>
using namespace std;
int main(){
	int a = 0;
	int b = 0;
	cout << "Podaj dlugosc: ";
	cin >> a;
	cout << "Podaj szerokosc: ";
	cin >> b;
	for(int i=a; i < a; i++){
		for(int j=b; j < b; i++){
			cout << "*" << endl;
		}
	cout << "*" << endl;
	}
	return 0;
}