// cpp-200-160.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>

void Print(const std::map<int, std::string>& data)
{
	std::cout << "== Print ==" << std::endl;

	for (auto iter = data.begin(); iter != data.end(); ++iter)
	{
		std::cout << iter->first << " : " << iter->second << ", ";
	}

	std::cout << std::endl;
}

int main()
{
	std::map<int, std::string> data;
	data.insert({ 0,"첫 번째" });
	data.insert({ 1,"두 번째" });

	Print(data);

	auto ret = data.insert({ 1, "세 번째" });

	if (ret.second == true)
		std::cout << "== 데이터 추가 성공 ==" << std::endl;
	else
		std::cout << "== 데이터 추가 실패 ==" << std::endl;

	data.at(0) = "수정1";

	Print(data);

	return 0;
}

