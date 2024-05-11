// cpp-200-140.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum State
{
	kOpen,
	kClose,
	kDisconnect
};

typedef State _state;

struct Status
{
	_state machine1;
	_state machine2;
} _status;

int main()
{
	_status.machine1 = kOpen;
	_status.machine2 = kDisconnect;

	std::cout << "상태 : " << _status.machine1 << std::endl;
	std::cout << "상태 : " << _status.machine2 << std::endl;

	return 0;
}

