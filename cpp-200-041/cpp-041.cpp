#include <iostream>

using namespace std;

int main()
{
	int p = 0;
	int n = 0;
	int t = 0;

	for (int i = 1; i < 10; i++)
	{
		p = 0; // ���� ��
		n = 1; // �Ǻ���ġ ��

		for (int j = 1; j <= i; j++)
		{					//i=  1 2   3      4 5
			cout << n << ", "; // 1 1 1 1 1 2  3 5 ...
			// t�� �ӽú���
			t = n;			   // 1 1 1 1 1 2  3 
			n += p;			   // 1 1 2 1 1 3  5
			p = t;			   // 1 1 1 1 1 2  3
		}

		cout << endl;
	}

	return 0;
}

// 1

// t n p 
// i=1, 1
// i=2, 1 2
// i=3, 1 2 3
// i=4, 1 2 3  