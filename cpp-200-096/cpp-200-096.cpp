// cpp-200-096.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const string file_name = "096.txt";

	ofstream file_out;
	file_out.open(file_name, ifstream::out);

	file_out << "������ �����հ� Ȳ����" << endl;
	file_out << "����� ������ ��ȭ�� ��" << endl;

	file_out.close();

	ifstream file_in;
	file_in.open(file_name, ifstream::in);

	string line;

	while (getline(file_in, line))
	{
		cout << line << endl;
	}

	file_in.close();

	return 0;
}

