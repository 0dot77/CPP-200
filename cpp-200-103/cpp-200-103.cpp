// cpp-200-103.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem>

using namespace std;

int main()
{
	int size = filesystem::file_size("�������� ����.txt");

	cout << "���� ũ�� : " << size << "����Ʈ" << endl;

	return 0;
}

