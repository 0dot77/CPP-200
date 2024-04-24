// cpp-200-077.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>

using namespace std;

int main()
{
	const string kMyJob = "developer";

	string question = "who are you : ";
	string answer = "my job is :";

	cout << question << kMyJob << endl;
	cout << answer << kMyJob << endl;

	return 0;
}

