#include <iostream>

using namespace std;

int main()
{
	int num = 3;
	
	switch (num)
	{
	case 1:
		cout << "number 값은 1입니다." << endl;
		break;
	case 2:
		cout << "number 값은 2입니다." << endl;
		break;
	case 3:
		cout << "number 값은 3입니다." << endl;
		break;
	default:
		cout << "number 값을 알 수 없다." << endl;
		break;
	}
	return 0;
}