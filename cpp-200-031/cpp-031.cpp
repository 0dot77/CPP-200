#include <iostream>

using namespace std;

class Temp {
	int no;
	bool is_on;
};

int main()
{
	cout << "char 크기 : " << sizeof('p') << endl; // 1byte
	cout << "int 크기 : " << sizeof(10) << endl; // 4byte 32bits
	cout << "double 크기 : " << sizeof(10.) << endl; // 8byte 64bits
	cout << "class 크기 : " << sizeof(Temp) << endl; // 

	return 0;
}