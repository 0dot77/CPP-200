// cpp-200-123.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

enum TmpEnum {};

enum class TmpEnumClass : int {};

int main()
{
	cout << boolalpha; // 콘솔에 출력될 결과를 boolean 으로 설정한다.

	cout << "== is_integral ==" << endl;
	cout << is_integral<TmpEnum>::value << endl;
	cout << is_integral<TmpEnumClass>::value << endl;
	cout << is_integral<signed int>::value << endl;
	cout << is_integral<unsigned int>::value << endl;
	cout << is_integral<double>::value << endl;
	cout << is_integral<bool>::value << endl; // 정수는 아니지만, 0과 1로 나타낼 수 있기 때문에 true

	cout << "== is_enum ==" << endl;
	cout << is_signed<TmpEnum>::value << endl;
	cout << is_signed<signed int>::value << endl;
	cout << is_signed<unsigned int>::value << endl;

	cout << "== is_ungisned ==" << endl;
	cout << is_unsigned<TmpEnumClass>::value << endl;
	cout << is_unsigned<int>::value << endl;
	cout << is_unsigned<unsigned int>::value << endl;
}

