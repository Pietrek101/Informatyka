#include <iostream>
using namespace std;
int a = 0;
int t[5];
void SumTab(int b){
	b = t[0]+=t[1]+=t[2]+=t[3]+=t[4];
}
int main(){
	cout << "Podaj 5 liczb, ktore nalezy zsumowac: " << endl;
	for(int u=0; u < 5; u++){
		cin >> t[u];}
	cout << "Suma liczb: " << SumTab << endl;
}