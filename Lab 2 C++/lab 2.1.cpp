#include <iostream>
using namespace std;


void first_func() {
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите два числа\n";
	int a, b;
	cin >> a >> b;
	cout << "—реднее арифмет: " << (a + b) / 2 << endl;
	cout << "¬ведите знак операции (+, -, * или /): \n";
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
	//    cout << "¬веден некорректный знак" << endl;
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
		cout << "¬веден некорректный знак" << endl;
		break;
	}

}