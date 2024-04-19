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
		ss >> number1; // ss 변수에서 숫자를 읽어 number1에 할당
		ss.ignore(); // 다음 데이터를 읽게 하기 위해 igonre()

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