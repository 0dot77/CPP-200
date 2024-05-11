// cpp-200-139.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <atomic>

int main()
{
	std::atomic<int> data1 = 1;
	data1++;
	data1 += 1;
	data1.fetch_add(1);
	atomic_fetch_add(&data1, 1);

	std::atomic<int> data2 = 100;
	data2--;
	data2 -= 1;
	data2.fetch_sub(1);
	atomic_fetch_sub(&data2, 1);

	std::cout << "data1 : " << data1 << ", data2 : " << data2 << std::endl;

	return 0;
}

