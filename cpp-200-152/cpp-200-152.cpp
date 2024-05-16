// cpp-200-152.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> data;

	data.assign(5, 100);

	for (int i = 0; i < data.size(); i++)
		std::cout << "data " << i << " : " << data.at(i) << std::endl;

	data.front() = 1;
	data.back() = 2;

	if (data.empty() == true)
		std::cout << "벡터가 비어있습니다." << std::endl;
	else
	{
		for (int i = 0; i < data.size(); i++)
		{
			std::cout << "data " << i << " : " << data.at(i) << std::endl;
		}
	}

	return 0;
}

