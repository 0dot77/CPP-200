// cpp-200-138.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <atomic>

int main()
{
	std::atomic<int> data1(10);

	int number = 20;

	bool is_exchange = data1.compare_exchange_weak(number, 30);

	std::cout << std::boolalpha;
	std::cout << "data1 : " << data1 << ", number : " << number << ", " << is_exchange << std::endl;

	std::atomic<int> data2 = ATOMIC_VAR_INIT(10);

	is_exchange = std::atomic_compare_exchange_weak(&data2, &number, 40);

	std::cout << "data2 : " << data2 << ", number : " << number << ", " << is_exchange << std::endl;

	return 0;
}

