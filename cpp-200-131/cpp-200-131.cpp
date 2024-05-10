// cpp-200-131.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data;
	int number = 0;

	try
	{
		number = data.at(10);
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	return 0;
}

