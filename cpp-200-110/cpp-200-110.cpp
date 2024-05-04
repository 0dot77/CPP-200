// cpp-200-110.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Info
{
public:
	Info() {
		data = new int;
		data_arr = new int[3];
	}
	~Info()
	{
		delete data;
		delete[] data_arr;
	}

	void Dispose()
	{
		delete data;
		delete[] data_arr;
	}

private:
	int* data;
	int* data_arr;
};

int main()
{
	Info* info = new Info();
	
	info->Dispose();
	//delete info; 이미 Dispose를 통해서 메모리 할당 해제를 했기 때문에 어디를 해제 해야할지 몰라 문제를 일으킨다.

	return 0;
}

