#include <iostream>
using namespace std;


void first_func() {
	setlocale(LC_ALL, "Russian");
	cout << "������� ��� �����\n";
	int a, b;
	cin >> a >> b;
	cout << "������� �������: " << (a + b) / 2 << endl;
	cout << "������� ���� �������� (+, -, * ��� /): \n";
	char op;
	cin >> op;

	//if (op == '+') {
	//    cout << a + b << endl;
	//}
	//else if (op == '-') {
	//    cout << a - b << endl;
	//}
	//else if (op == '*') {
	//    cout << a * b << endl;
	//}
	//else if (op == '/') {
	//    cout << a / b << endl;
	//}
	//else {
	//    cout << "������ ������������ ����" << endl;
	//}

	switch (op) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a + b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	default:
		cout << "������ ������������ ����" << endl;
		break;
	}

}