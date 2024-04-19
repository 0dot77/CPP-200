#include <iostream>

using namespace std;

void doMinus(const int x, const int y) {
	cout << "x - y = " << x - y << endl;
}

int doPlus(const int x, const int y) {
	
	return x + y;
}

int main() {
	doMinus(10, 5);
	cout << "x + y = " << doPlus(2, 6) << endl;

	return 0;
}