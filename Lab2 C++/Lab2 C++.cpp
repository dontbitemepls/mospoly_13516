// Lab2 C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите два числа\n";
    int a, b;
    cin >> a >> b;
    cout << "Среднее арифмет: " << (a + b) / 2 << endl;
    cout << "Введите знак операции (+, -, * или /): \n" ;
    char op;
    cin >> op;
    
    
    //if (op == "+") {
    //    cout << a + b << endl;
    //}
    //else if (op == "-") {
    //    cout << a - b << endl;
    //}
    //else if (op == "*") {
    //    cout << a * b << endl;
    //}
    //else if (op == "/") {
    //    cout << a / b << endl;
    //}
    //else {
    //    cout << "Введен некорректный знак" << endl;
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
            cout << "Введен некорректный знак" << endl;
    }

    	// ЧАCТЬ 2.

	int num;
	while (true) {
		cout << "Введите целое положительное число: " << endl;
		cin >> num;
		if (num > 0) {
			break;
		}
	}

	int ans = 0;
	for (int i = 0; i <= num; i++) {
		ans += i;
	}
	cout << ans << endl;

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int a : arr) {
		cout << a << " ";
	}
	cout << endl;

	for (int i = 0; i < length; i++) {
		if (i % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	ans = 0;
	for (int i = 0; i < length; i++) {
		if (i % 2 != 0) {
			ans += arr[i];
		}
	}
	cout << ans << endl;
}

}



