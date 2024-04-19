#include <iostream>

using namespace std;

class Temp {
	int no;
	bool is_on;
};

int main()
{
	cout << "char 农扁 : " << sizeof('p') << endl; // 1byte
	cout << "int 农扁 : " << sizeof(10) << endl; // 4byte 32bits
	cout << "double 农扁 : " << sizeof(10.) << endl; // 8byte 64bits
	cout << "class 农扁 : " << sizeof(Temp) << endl; // 

	return 0;
}