#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	stringstream ss;

	double number1 = 0.0;

	ss << "1.2,2.6-3.8!4.7=8.9" << endl;

	while (!ss.eof())
	{
		ss >> number1; // ss �������� ���ڸ� �о� number1�� �Ҵ�
		ss.ignore(); // ���� �����͸� �а� �ϱ� ���� igonre()

		cout << number1 << ", ";
	}

	ss.clear();
	ss.str("");
	ss << "1," << "2" << 3 << " " << 4;

	int number2 = 0;

	cout << endl << "== string to int ==" << endl;

	while (!ss.eof())
	{
		ss >> number2;
		ss.ignore();

		cout << number2 << ", ";
	}

	return 0;
}