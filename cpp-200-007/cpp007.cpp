#include <iostream>
#include <string>

using namespace std;

int main() {
	char character = 'C';
	int integer = 100;
	double precision = 3.14159;
	bool is_true = true;
	string word = "Hello World";

	cout << "char : " << character << endl;
	cout << "int : " << integer << endl;
	cout << "double : " << precision << endl;
	cout << "bool : " << is_true << endl;
	cout << "string : " << word << endl;

	cout << sizeof(float) << endl; // 4byte 32bits
	cout << sizeof(double) << endl; // 8byte 64bits

	return 0;
}