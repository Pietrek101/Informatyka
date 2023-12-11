#include <iostream>
using namespace std;
int main(){
	int a[ 5 ];
	int b = 0;
	cout << "Wprowadz 5 liczb: " << endl;
	cin >> a[ 0 ];
	cin >> a[ 1 ];
	cin >> a[ 2 ];
	cin >> a[ 3 ];
	cin >> a[ 4 ];
	for(int j=0; j < 5; j++){
	if(a[ b ]%2==0) cout << "Liczba parzysta: " << a[ b ] << endl;
	b+=1;
	}
}  