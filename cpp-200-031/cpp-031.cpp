#include <iostream>

using namespace std;

class Temp {
	int no;
	bool is_on;
};

int main()
{
	cout << "char ũ�� : " << sizeof('p') << endl; // 1byte
	cout << "int ũ�� : " << sizeof(10) << endl; // 4byte 32bits
	cout << "double ũ�� : " << sizeof(10.) << endl; // 8byte 64bits
	cout << "class ũ�� : " << sizeof(Temp) << endl; // 

	return 0;
}