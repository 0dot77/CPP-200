// cpp-200-105.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
		name_ = "조선 예종 이황";
	};

	string GetName() const
	{
		return name_;
	}

private:
	string name_;
};

int main()
{

	KingInfo king_info;

	cout << king_info.GetName() << endl;
}

