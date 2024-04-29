// cpp-200-093.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <locale>
#include <codecvt>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);  // 콘솔 코드 페이지를 UTF-8로 설정
	std::wcout.imbue(std::locale("en_US.UTF-8"));

	wifstream read("093.txt");

	read.imbue(locale(read.getloc(), new codecvt_utf8<wchar_t>));

	wchar_t line;

	while (read.get(line))
	{
		wcout << line;
	}

	wcout << endl;

	read.close();

	return 0;
}

