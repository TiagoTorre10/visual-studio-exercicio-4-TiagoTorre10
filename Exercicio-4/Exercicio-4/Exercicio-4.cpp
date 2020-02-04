#include <iostream>
using namespace std;
int main()
{
	cout << "Adicione um numero: ";
	int num1;
	cin >> num1;
	cout << "Adicione um numero: ";
	int num2;
	cin >> num2;
	int resul;
	resul = num1 + num2;
	cout << num1 << "+" << num2 << "=" << resul;
}