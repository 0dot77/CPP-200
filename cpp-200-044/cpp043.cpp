#include <iostream>

using namespace std;

int main()
{
	cout << "round(1.1) : " << round(1.1) << endl; // 1
	cout << "round(2.3) : " << round(-2.3) << endl; // -2
	cout << "round(40.5) : " << round(40.5) << endl; // 41
	cout << "round(55.7) : " << round(-55.7) << endl; // -56
	cout << "round(100.9) : " << round(100.9) << endl; // 101

	return 0;
}