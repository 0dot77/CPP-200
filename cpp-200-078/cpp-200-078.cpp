// cpp-200-078.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int number1 = 10;
	int number2 = 20;

	double number3 = 40.1;

	// ptr1�� ���� ����Ű�� ����(Int)�� ���(const) ���� �ǹ��Ѵ�.
	// ������ ����ϱ� �ּҴ� ������ Ÿ�Կ� ���缭 ��ȯ�� �����ϴ�.
	int const* ptr1;
	ptr1 = &number1;
	ptr1 = &number2;

	// ptr2 ��ü�� ���(const) ���� �ǹ��Ѵ�.
	int* const ptr2 = &number1; // ��� �ּҸ� �Ҵ�
	*ptr2 = number2; // �������� Ȱ���� ���� �ּҿ� �ٲ���� �� �ִ�.

	return 0;
}

