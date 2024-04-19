#include <iostream>

using namespace std;

int main()
{
	int num = 0;

	do {
		num++;

		if (num % 3 == 0)
		{
			continue;
		}
		else
		{
			cout << "number °ª : " << num << endl;
		}
	} while (num < 10);
	
	return 0;
}