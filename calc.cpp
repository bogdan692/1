#include<iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Ukrainian");
	int a, b, op;
	double result;
	cout << "введіть перше число\n";
	cin >> a;
	cout << "введіть оператор \n1\t+\n2\t-\n3\t*\n4\t/\n\n";
	cin >> op;
	cout << "введіть друге число\n";
	cin >> b;
	switch(op){
		case 1:
			result = a + b;
			break;
		case 2:
			result = a - b;
			break;
		case 3:
			result = a * b;
			break;
		case 4:
			result = a / b;
			break;
	}
	cout << "результат: " << result;
}
