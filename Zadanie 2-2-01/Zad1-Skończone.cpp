#include <iostream>
using namespace std;
bool pierwsza(int p){
	for(int i=2;i*i<=p;i++)
		if(p%i==0)
			return false;
	return true;
}
int main(){
	int lp = 0;
	int p = 2;
	int n;
	cout << "Ile liczb pierwszych chcesz wyswietlic: " << endl;
	cin >> n;
	cout << "Liczby pierwsze: " << endl;
	while (lp < n){
		if(pierwsza(p)){
			cout << p << ", ";
			lp++;
		}
		p++;
	}
}
