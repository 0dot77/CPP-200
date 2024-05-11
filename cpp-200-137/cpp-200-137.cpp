// cpp-200-137.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <atomic>

int main()
{
	std::atomic<int> data1(10);
	std::atomic<int> data2 = ATOMIC_VAR_INIT(20);
	std::atomic<int> data3 = data1.exchange(data2.load());

	std::cout << data1 << ", " << data2 << ", " << data3 << std::endl;

	std::atomic_exchange(&data1, data3);
	std::atomic_exchange(&data2, data1.load());
	std::atomic_exchange(&data3, 55);

	std::cout << data1 << ", " << data2 << ", " << data3 << std::endl;

	return 0;
}

