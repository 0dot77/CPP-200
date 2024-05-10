// cpp-200-123.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

enum TmpEnum {};

enum class TmpEnumClass : int {};

int main()
{
	cout << boolalpha; // �ֿܼ� ��µ� ����� boolean ���� �����Ѵ�.

	cout << "== is_integral ==" << endl;
	cout << is_integral<TmpEnum>::value << endl;
	cout << is_integral<TmpEnumClass>::value << endl;
	cout << is_integral<signed int>::value << endl;
	cout << is_integral<unsigned int>::value << endl;
	cout << is_integral<double>::value << endl;
	cout << is_integral<bool>::value << endl; // ������ �ƴ�����, 0�� 1�� ��Ÿ�� �� �ֱ� ������ true

	cout << "== is_enum ==" << endl;
	cout << is_signed<TmpEnum>::value << endl;
	cout << is_signed<signed int>::value << endl;
	cout << is_signed<unsigned int>::value << endl;

	cout << "== is_ungisned ==" << endl;
	cout << is_unsigned<TmpEnumClass>::value << endl;
	cout << is_unsigned<int>::value << endl;
	cout << is_unsigned<unsigned int>::value << endl;
}

