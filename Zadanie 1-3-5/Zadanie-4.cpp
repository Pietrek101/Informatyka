#include <iostream>
using namespace std;
int a = 0;
int t[5];
void SumTab(int ta[5]){
	for(int i = 0; i < 5; i++){
		ta[i] = t[i];
		a+=ta[i];}
}
int main(){
	cout << "Podaj 5 liczb, ktore nalezy zsumowac: " << endl;
	for(int u=0; u < 5; u++){
		cin >> t[u];}
	cout << "Suma liczb: " << SumTab << endl;
}