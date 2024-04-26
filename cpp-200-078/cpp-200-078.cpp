// cpp-200-078.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int number1 = 10;
	int number2 = 20;

	double number3 = 40.1;

	// ptr1을 통해 가리키는 정수(Int)가 상수(const) 임을 의미한다.
	// 정수가 상수니까 주소는 정수의 타입에 맞춰서 변환이 가능하다.
	int const* ptr1;
	ptr1 = &number1;
	ptr1 = &number2;

	// ptr2 자체가 상수(const) 임을 의미한다.
	int* const ptr2 = &number1; // 상수 주소를 할당
	*ptr2 = number2; // 역참조를 활용해 값을 주소에 바꿔넣을 수 있다.

	return 0;
}

