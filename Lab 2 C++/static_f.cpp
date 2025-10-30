#pragma once
#include "static_f.h"
#include <iostream>
using namespace std;


namespace MyFuncs {
	void staticFunction(int value) {
		static int previous = 0;
		cout << "Сумма переданного числа и предыдущего: " << value + previous << endl;
		previous = value;
	}
}