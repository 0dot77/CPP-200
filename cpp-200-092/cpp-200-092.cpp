// cpp-200-092.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Info
{
	string country;

	struct Who
	{
		string name;
		string nickname;
	}who;
};

int main()
{
	Info chuck = { "����", {"�屺 ô�ذ�", "�ҵ帶����"} };
	Info anjang = { "������", "����� �����", "���� ���" };

	cout << chuck.country << ", " << chuck.who.name << ", " << chuck.who.nickname << endl;
	cout << anjang.country << ", " << anjang.who.name << ", " << anjang.who.nickname << endl;

	return 0;
}

