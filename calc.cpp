#include<iostream>
#include<math.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Ukrainian");
	int a, b, op;
	double result;
	cout << "������ ����� �����\n";
	cin >> a;
	cout << "������ �������� \n1\t+\n2\t-\n3\t*\n4\t/\n5\t^\n";
	cin >> op;
	cout << "������ ����� �����\n";
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
		case 5:
			result = pow(a,b);
			break;
	}
	cout << "���������: " << result;
}

//11
