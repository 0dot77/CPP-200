#include <iostream>

using namespace std;

int main() {

	int x = 1;

	cout << "x = " << x++ << endl; // 1
	cout << "x = " << x++ << endl; // 2
	cout << "x = " << ++x << endl; // 4
	cout << "x = " << x-- << endl; // 4
	cout << "x = " << x-- << endl; // 3
	cout << "x = " << --x << endl; // 1

	return 0;
}