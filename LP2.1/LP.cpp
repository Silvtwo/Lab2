// LP2.1.cpp
// < Заболотний Олег Віталійович >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 9

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double A; // перший вхідний параметр
	double B; // другий вхідний параметр
	double Z1; // результат обчислень першого виразу
	double Z2; // результат обчислень другого виразу
	cout << "A:";
	cin >> A;
	cout << "B:";
	cin >> B;
	Z1 = pow((cos(A) - cos(B)), 2) - pow((sin(A) - sin(B)), 2);
	cout << "Z1=" << Z1;
	//Z2 = -4*(sin((A-B)/2)*sin((A-B)/2)) * cos(A+B);
	//cout << "\nZ2=" << Z2;





}
