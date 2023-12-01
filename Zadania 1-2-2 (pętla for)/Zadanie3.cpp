#include <iostream>
using namespace std;
int main(){
	int a=0;
	int b=0;
	int c=2;
	cout << "Podaj szerokosc: ";
	cin >> a;
	cout << "Podaj wysokosc: ";
	cin >> b;
	for(int l=0; l < a; l++){
		cout << "-";}
	cout << endl;
	for(int i=0; i < b-2; i++){
		cout << "|";
		for(int j=0; j < a-2; j++){
			if(c%2==0) cout << "*";
			else cout << "#";
			if(c%2==0) c-=1;
			else c+=1;}
		c+=1;
		cout << "|";
		cout << endl;}
	for(int k=0; k < a;k++){
		cout << "-";}
	cout << endl;}
