// cpp-200-161.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    data.insert({ 5, "test1" });
    data.insert({ 3, "test2" });
    data.insert({ 11, "test3" });

    data[3] = "test 수정";

    auto result = data.find(11);

    if (result != data.end())
        std::cout << "== 검색 성공 : " << result->first << ", " << result->second << std::endl;
    else
        std::cout << "== 검색 실패 !! ==" << std::endl;

    data.erase(5);

    Print(data);

    return 0;
}


