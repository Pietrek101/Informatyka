#include <iostream>
using namespace std;
int main(){
	int n;
	int k = 2;
	cout << "Podaj liczbe: " << endl;
	cin >> n;
	cout << "Czynniki pierwsze liczby: " << n << ": " << endl;
	for(n > 1;;){
		for(n / k == 0;;){
			if(n < 2){
			exit(1);
			}
			if(n % k == 0){
				cout << k << " ";
				n = n / k;}
			else{
				k++;}
		}
	}
	return 0;
}
