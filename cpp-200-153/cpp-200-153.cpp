// cpp-200-153.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> data1({ 1,2,3 });
	std::vector<int> data2 = { 10,20,40 };

	data1.swap(data2);
	data1.insert(data1.begin() + 1, 20);

	std::cout << "== data1 ==" << std::endl;

	for (int i = 0; i < data1.size(); i++)
	{
		std::cout << "data1 (" << i << ") : " << data1.at(i) << std::endl;
	}

	std::cout << std::endl << "== data2 ==" << std::endl;

	for (int i = 0; i < data2.size(); i++)
	{
		std::cout << "data2 (" << i << ") : " << data2.at(i) << std::endl;
	}

	data2.erase(data2.begin(), data2.begin() + 2);

	data2.push_back(100);
	data2.push_back(100);
	data2.push_back(100);
	data2.pop_back();

	data2.insert(data2.end(), data1.begin(), data1.end());

	std::cout << std::endl << "== data2 ==" << std::endl;

	for (int i = 0; i < data2.size(); i++)
	{
		std::cout << "data2 (" << i << ") : " << data2.at(i) << std::endl;
	}
	return 0;
}

