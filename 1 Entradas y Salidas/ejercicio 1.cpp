// 1 escribe un programa que lea 2 numeros y muestre
// la suma resta multiplicacion y divicion

#include<iostream>

using namespace std;

int main(){
	double num1;
	double num2;
	
	cout<<"Introduce el primer digito: ";
	cin>>num1;
	cout<<"Introduce el segundo digito: ";
	cin>>num2;
	
	cout<<"La suma es: "<<num1+num2<<endl;
	cout<<"La resta es: "<<num1-num2<<endl;
	cout<<"La multiplicacion es: "<<num1*num2<<endl;
	cout<<"La divicion es: "<<num1/num2<<endl;
	
	
	return 0;
}
