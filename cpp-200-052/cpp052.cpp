#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t start = time(NULL);
	time_t finish = time(NULL);

	int pass_int = 1;

	time(&start);

	for (int i = 1; i < 10000; i++)
	{
		for (int j = 1; j < 10000; j++)
		{
			pass_int += 1;
		}
	}

	time(&finish);

	cout << "1�� 100�� �� ���ϴ� �ð� : " << difftime(finish, start) << "��\n";

	return 0;
}