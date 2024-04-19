#include <iostream>

using namespace std;

int main()
{
	cout << "== 소수점 버리기 ==" << endl;
	cout << "floor(1.1) : " << floor(1.1) << endl; // 1
	cout << "floor(2.3) : " << floor(-2.3) << endl; // -2
	cout << "floor(40.5) : " << floor(40.5) << endl; // 40
	cout << "floor(55.7) : " << floor(55.7) << endl; // 55
	cout << "floor(100.9) : " << floor(100.9) << endl; // 100

	cout << "== 소수점 올리기 == " << endl;
	cout << "ceil(1.1) : " << ceil(1.1) << endl; // 1
	cout << "ceil(2.3) : " << ceil(2.3) << endl; // 2
	cout << "ceil(40.5) : " << ceil(40.5) << endl; // 41
	cout << "ceil(55.7) : " << ceil(55.7) << endl; // 56
 	cout << "ceil(100.9) : " << ceil(100.9) << endl; // 101


	return 0;
}