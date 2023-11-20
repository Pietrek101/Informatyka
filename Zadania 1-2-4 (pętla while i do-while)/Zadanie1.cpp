#include <iostream>
using namespace std;

int main()
{
    int liczba;
cout << "Ile razy ma byc wyswietlany tekst? " << endl;
cin >> liczba;
    while( liczba >= 1 )
    {
        cout << "Napis" << endl; 
        --liczba;
    }

    return 0;
}