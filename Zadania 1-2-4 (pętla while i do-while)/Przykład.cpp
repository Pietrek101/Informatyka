#include <iostream>
using namespace std;

int main(){
     
    // petla while
    // while(warunek-konczacy)    
    short a = 30;
    while(a > 0){
        cout << a << ", ";
        a -= 1;
    }
    cout << endl;

    short liczba = 0;
    while(liczba != 5){
        cout << "Podaj liczbe: ";
        cin >> liczba;
    }
    
    cout << endl << endl;
    short liczba2;
    do{
        cout << "Podaj liczbe: ";
        cin >> liczba2;
    }while(liczba2 != 5 );

   
 

cout << endl;
system("pause");
}