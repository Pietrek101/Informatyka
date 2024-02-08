#include <iostream>
using namespace std;
int suma(int a,int b){
	return a+b;}
float suma(int a, float b){
	return a+b;}
float suma(float a,int b){
	return a+b;}
float suma(float a,float b){
	return a+b;}
int main(){
	float a,b;
	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> a;
	cout << "Podaj druga liczbe: " << endl;
	cin >> b;
	cout << "Suma liczb: " << suma(a,b);
	return 0;}