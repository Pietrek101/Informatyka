#include <iostream>
using namespace std;
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Podaj szerokosc: ";
	cin >> a;
	cout << "Podaj wysokosc: ";
	cin >> b;
	for(int i=0; i < b; i++){
		for(int k=0; k < c; k++){
		cout << " ";
		}
		for(int j=0; j < a; j++){
			cout << "*";
		}
		c += 1;
		a -= 2;
	cout << endl;
	}
	return 0;
}
