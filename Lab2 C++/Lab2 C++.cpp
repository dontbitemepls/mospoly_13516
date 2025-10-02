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


}


